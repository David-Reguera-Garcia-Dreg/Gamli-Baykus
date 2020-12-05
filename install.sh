if [ `whoami` != 'root' ]
  then
    clear
    echo "[!] Root olarak calistirin !"
    echo " "
    exit
else
if [ ! -f "/usr/bin/gcc" ]; then
    clear
    echo "[!] gcc bulunamadi Kurulumu yapin"
    echo " "
else   
if [ ! -f "/usr/bin/wget" ]; then
    clear
    echo "[!] wget bulunamadi Kurulumu yapin"
    echo " "
else   
if [ ! -f "/usr/bin/make" ]; then
    clear
    echo "[!] Make bulunamadi Kurulumu yapin"
    echo " "
else   

sleep 1
echo "[+] Kurulum Basliyor.."
sudo chmod 777 *
sudo mv -f gamlibaykus /usr/bin/gamlibaykus
sudo mkdir /var/baba
sudo mv -f lkms/ /var/baba/lkms
sudo mv -f wpanel/ /var/baba/wpanel
echo "[+] Kurulum Tamamlandi."
sudo touch /var/baba/lkms/installed.txt
echo "Kurulum yapildi..\nhttps://github.com/0x00fy/Gamli-Baykus/"
sleep 1
echo "[+] Baslatiliyor.."
/usr/bin/gamlibaykus

fi
fi
fi
fi

