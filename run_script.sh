#!/bin/bash

# Parametros para cores:
blue='\033[0;34m'
boldblue='\033[1;34m'
orange='\033[0;33m'
boldorange='\033[1;33m'
green='\033[0;32m'
boldgreen='\033[1;32m'
red='\033[0;31m'
boldred='\033[1;31m'

# Remover cor
clear='\033[0m'
boldclear='\033[1m'

# Menu de seleção - comeco
clear && printf ${boldorange}"\n-----Menu:-----${clear}\n"
sleep 01;
# Aplicar configurações essenciais
printf ${boldblue}"- Repositórios${clear}\n"
printf "Digite ${boldorange}0${clear} - ${boldclear}Para instalar o DEB-GET${clear}\n"
printf "Digite ${boldorange}9${clear} - ${boldclear}Para Desinstalar SNAPs${clear}\n"
printf ${boldblue}"\n- Configurações essenciais${clear}\n"
printf "Digite ${boldorange}1${clear} - Para corrigir problema de relógio com o Windows\n"
printf "Digite ${boldorange}2${clear} - Para limitar o CState da CPU até C2E\n"
# Aplicar configurações extras
printf ${boldblue}"\n- Aplicar correções e configurações${clear}\n"
printf "Digite ${boldorange}3${clear} - Para aplicar o filtro de ruído para o microfone\n"
printf "Digite ${boldorange}4${clear} - Para aplicar fix microfone mutado pós reboot\n"
printf "Digite ${boldorange}5${clear} - Para aplicar script de simbolos do teclado\n"
printf "Digite ${boldorange}6${clear} - ${boldclear}Para instalar o driver r8168 para placa 'Realtek 8136'${clear}\n"
# Baixar pacotes
printf ${boldblue}"\n- Pacotes e programas${clear}\n"
#printf "Digite ${boldorange}J${clear} - Para baixar o pacote alsa-tools-gui nativo\n"
printf "Digite ${boldorange}F${clear} - Para instalar o Firefox em .DEB\n"
printf "Digite ${boldorange}D${clear} - Para baixar o Discord\n"
printf "Digite ${boldorange}H${clear} - Para baixar o Hamsket\n"
printf "Digite ${boldorange}S${clear} - Para baixar o Steam\n"
printf "Digite ${boldorange}7${clear} - Para baixar o Fightcade\n"
printf "Digite ${boldorange}G${clear} - Para baixar o GIMP em portugues\n"

printf "Digite ${boldorange}M${clear} - Para ler as instruções e recomendações extras${clear}\n"
printf ${orange}"*Digite ${boldred}"Q"${orange} para sair do script*${clear}\n"
sleep 01;
printf ${boldorange}"\nSelecione uma opção:${clear}\n"
# Menu de selecao - fim

#############################
#Atualização de repositórios
read -n1 -s opt
if [ $opt = "0" ];then
printf ${boldblue}"\n- Instalando o DEB-GET *\n${clear}\n"
sudo apt install curl
curl -sL https://raw.githubusercontent.com/wimpysworld/deb-get/main/deb-get | sudo -E bash -s install deb-get
sleep 01;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# Remover Snaps:
elif [ $opt = "9" ];then
printf ${boldorange}"\n- Desinstalando os Snaps *\n${clear}\n"
sudo snap remove --purge firefox
sudo snap remove --purge snap-store
sudo snap remove --purge gnome-3-38-2004
sudo snap remove --purge gtk-common-themes
sudo snap remove --purge snapd-desktop-integration
sudo snap remove --purge bare
sudo snap remove --purge core20
sudo snap remove --purge snapd
sudo apt remove -y --autoremove snapd

sudo bash -c "printf 'Package: snapd\nPin: release a=*\nPin-Priority: -10\n' > /etc/apt/preferences.d/nosnap.pref"

sleep 02;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# Aplicando configurações de Horário:
elif [ $opt = "1" ];then
printf ${orange} "* Configurando a hora local${clear}\n"
sleep 03;
timedatectl set-local-rtc 1 --adjust-system-clock
sleep 02;
printf ${boldgreen}"** Pode ser necessário reiniciar o PC e corrigir a hora na BIOS **${clear}\n"
sleep 02;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# GRUB:
elif [ $opt = "2" ];then
printf ${orange}"* Aplicando configurações do CState...${clear}\n"
sleep 02;
printf ${orange}"* Abrindo /etc/default/grub${clear}\n"
sleep 02;
printf ${boldorange}"* Copie 'intel_idle.max_cstate=2' e cole na parte 'GRUB_CMDLINE_LINUX_DEFAULT='${clear}\n"
printf ${green}"*** Aperte ${red}'ENTER'${green} para abrir o NANO.${clear}\n" && read
sudo nano /etc/default/grub
printf ${orange}"** Executando o comando 'sudo update-grub' **${clear}\n"
echo "sudo update-grub"
sudo update-grub
sleep 01;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# Alsa tools:
## INATIVADO
#elif [ $opt = "j" ];then
#printf ${orange}"* Baixando o pacote alsa-tools-gui${clear}\n"
#sudo apt install -y alsa-tools-gui
#sleep 03;
#printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
#exec ./run_script.sh

#############################
# Firefox:
elif [ $opt = "f" ];then
exec ./scripts/firefox.sh

#############################
# Discord:
elif [ $opt = "d" ];then
exec ./scripts/discord-debget.sh

#############################
# Rambox:
elif [ $opt = "r" ];then
exec ./scripts/rambox-debget.sh

#############################
# Steam:
elif [ $opt = "s" ];then
exec ./scripts/steam.sh

#############################
# Fightcade:
elif [ $opt = "7" ];then
exec ./scripts/fightcade.sh

# GIMP:
elif [ $opt = "g" ];then
printf ${orange}"* Baixando o pacote gimp${clear}\n"
sudo apt install -y gimp language-pack-gnome-pt language-pack-gnome-pt-base
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

# Ruído microfone:
elif [ $opt = "3" ];then
exec ./scripts/noise_mic.sh

#############################
# Remapeamento do microfone:
elif [ $opt = "4" ];then
printf ${orange}"** Aplicando fix para MIC mudo após reboot: **${clear}\n"
printf ${boldgreen}"* Criando o script em '/usr/bin/refresh_audio.sh' *${clear}\n"
sudo cp ./refresh_audio.sh /usr/bin/refresh_audio.sh
sudo chmod a+x /usr/bin/refresh_audio.sh
mkdir -p ~/.config/autostart/
cp -r ./refresh_audio.sh.desktop ~/.config/autostart
sleep 03;
echo "Use o comando 'alsamixer' e ative as opções 'Dynamic, Indepentent, Loopback'" && sleep 01;
#printf ${boldblue}" É necessário aplicar um autostart para esse script manualmente ${clear}\n"
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# Atalho de simbolos do teclado
elif [ $opt = "5" ];then
printf ${orange}"** Aplicando script de atalhos de simbolos **${clear}\n"
printf ${boldgreen}"* Aplicando patch em '/usr/share/X11/xkb/symbols/br' *${clear}\n"
sudo cp /usr/share/X11/xkb/symbols/br /usr/share/X11/xkb/symbols/br.bkp
sudo patch -p1 /usr/share/X11/xkb/symbols/br < ./remap.patch
#printf ${boldblue}" É necessário aplicar o autostart para esse script manualmente ${clear}\n"
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

# Ruído microfone:
elif [ $opt = "6" ];then
exec ./scripts/r8168.sh

#############################
## Apps extras

#############################
## Tutoriais
elif [ $opt = "m" ];then
printf ${boldorange}"** Ações manuais caso o script não aplique: **${clear}\n"
sleep 03;
printf ${boldgreen}"* Baixe o módulo r8168 para o Driver de Rede:${clear}\n"
printf ${orange}"Instruções: https://sitemrcs.blogspot.com/2022/05/linux-correcao-para-o-driver-de-rede.html\n${clear}\n"
sleep 03;

printf ${boldgreen}"* Reconfigure manualmente o microfone:${clear}\n"
printf ${orange}"Instruções: https://sitemrcs.blogspot.com/2022/05/como-corrigir-o-problema-de-microfone.html\n${clear}\n"
sleep 03;
printf ${boldgreen}"* Verificar se script de simbolos do teclado está como autostart:${clear}\n"
printf ${orange}"Instruções: https://sitemrcs.blogspot.com/2022/06/como-criar-um-atalho-da-barra-vertical.html\n${clear}\n"
sleep 03;
printf ${boldgreen}"* Verificar se o DPI está em 96x96:${clear}\n"
printf ${orange}"Instruções: https://www.kali.org/docs/general-use/fixing-dpi/\n${clear}\n"
sleep 03;
printf ${boldorange}"Se os dados dos apps não forem restaurados, verifique a pasta de restauração${clear}\n"
sleep 02;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# Sair do script
elif [ $opt = "q" ];then
exit;
# Opção errada, inexistente
else
printf ${boldred}"\nOpção não encontrada, verifique o menu e selecione a opção correta${clear}\n"
printf "\nDica: não use caixa alta\n"
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh
fi # final do script
