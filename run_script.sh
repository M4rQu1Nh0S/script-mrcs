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
printf "Digite ${boldorange}0${clear} - ${boldclear}Para instalar e atualizar o APT,DEB-GET e desinstalar SNAPs ${boldred}(Obrigatório):${clear}\n"
printf ${boldblue}"\n- Configurações essenciais${clear}\n"
printf "Digite ${boldorange}1${clear} - Para corrigir problema de relógio com o Windows\n"
printf "Digite ${boldorange}2${clear} - Para limitar o CState da CPU até C1E\n"
# Aplicar configurações extras
printf ${boldblue}"\n- Configurações extras${clear}\n"
printf "Digite ${boldorange}3${clear} - Para aplicar o filtro de ruído para o microfone\n"
printf "Digite ${boldorange}4${clear} - Para aplicar fix microfone mutado pós reboot\n"
printf "Digite ${boldorange}5${clear} - Para aplicar script de simbolos do teclado\n"
printf "Digite ${boldorange}6${boldclear} - Para corrigir o DPI da tela (96x96)\n"
# Baixar pacotes
printf ${boldblue}"\n- Pacotes e programas${clear}\n"
printf "Digite ${boldorange}V${clear} - Para baixar o driver Nvidia 470\n"
printf "Digite ${boldorange}N${clear} - Para baixar o NALA (APT BackEnd)\n"
printf "Digite ${boldorange}L${clear} - Para baixar o Lutris nativo\n"
#printf "Digite ${boldorange}J${clear} - Para baixar o pacote alsa-tools-gui nativo\n"
printf "Digite ${boldorange}A${clear} - Para baixar o Audacity\n"
printf "Digite ${boldorange}F${clear} - Para baixar o Firefox\n"
printf "Digite ${boldorange}D${clear} - Para baixar o Discord\n"
printf "Digite ${boldorange}R${clear} - Para baixar o Rambox\n"
printf "Digite ${boldorange}H${clear} - Para baixar o Hamsket\n"
printf "Digite ${boldorange}Y${clear} - Para baixar o Yuzu\n"
printf "Digite ${boldorange}K${clear} - Para baixar o kCharSelect (KDE)\n"
printf "Digite ${boldorange}C${clear} - Para baixar o Citra\n"
printf "Digite ${boldorange}S${clear} - Para baixar o Steam\n"
printf "Digite ${boldorange}7${clear} - Para baixar o Fightcade\n"
printf "Digite ${boldorange}8${clear} - Para baixar o Krita\n"
printf "Digite ${boldorange}G${clear} - Para baixar o GIMP\n"

printf "Digite ${boldorange}M${clear} - Para ler as instruções e recomendações extras${clear}\n"
printf ${orange}"*Digite ${boldred}"Q"${orange} para sair do script*${clear}\n"
sleep 01;
printf ${boldorange}"\nSelecione uma opção:${clear}\n"
# Menu de selecao - fim

#############################
#Atualização de repositórios
read -n1 -s opt
if [ $opt = "0" ];then
printf ${boldblue}"\n- Atualizando o repositório APT${clear}\n"
sudo apt update
printf ${boldblue}"\n- Instalando o DEB-GET *\n${clear}\n"
sudo apt install curl
curl -sL https://raw.githubusercontent.com/wimpysworld/deb-get/main/deb-get | sudo -E bash -s install deb-get
sleep 01;
echo "Instalando 'deb-get-extras'..."
sudo apt install -y curl
curl -sL https://raw.githubusercontent.com/M4rQu1Nh0S/deb-get-extras/main/install.sh | sudo -E bash -s install.sh
sleep 01;
printf ${boldorange}"\n- Desinstalando os snaps *\n${clear}\n"
sudo apt purge -y snapd && rm -rf ~/snap
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
# Driver nvidia
elif [ $opt = "v" ];then
sleep 01;
printf ${orange}"* Baixando os pacotes nvidia 470${clear}\n"
sudo apt install nvidia-driver-470 nvidia-dkms-470
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# kCharselect:
elif [ $opt = "k" ];then
printf ${orange}"* Baixando o kCharSelect${clear}\n"
sudo apt install kcharselect
sleep 03;
exec ./run_script.sh

#############################
# Lutris:
elif [ $opt = "l" ];then
printf ${orange}"* Baixando o pacote lutris${clear}\n"
exec ./scripts/lutris.sh

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
# Audacity:
elif [ $opt = "a" ];then
printf ${orange}"* Baixando o pacote audacity${clear}\n"
sudo apt install -y audacity
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

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
# Hamsket:
elif [ $opt = "h" ];then
exec ./scripts/hamsket-debget.sh

#############################
# Yuzu:
elif [ $opt = "y" ];then
exec ./scripts/yuzu.sh

#############################
# Citra:
elif [ $opt = "c" ];then
exec ./scripts/citra.sh

#############################
# Steam:
elif [ $opt = "s" ];then
exec ./scripts/steam.sh

#############################
# Fightcade:
elif [ $opt = "7" ];then
exec ./scripts/fightcade.sh

#############################
# Krita:
elif [ $opt = "8" ];then
printf ${orange}"* Baixando o pacote Krita${clear}\n"
sudo apt install -y krita
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
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
cp ./refresh_audio.sh.desktop ~/.config/autostart
sleep 03;
echo "Reiniciando o pulse audio" && sleep 01;
pulseaudio -k
#printf ${boldblue}" É necessário aplicar um autostart para esse script manualmente ${clear}\n"
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# Atalho de simbolos do teclado
elif [ $opt = "5" ];then
printf ${orange}"** Aplicando script de atalhos de simbolos **${clear}\n"
printf ${boldgreen}"* Criando o script em '/usr/bin/remap57.sh' *${clear}\n"
sudo cp ./remap57.sh /usr/bin
sudo chmod a+x /usr/bin/remap57.sh
cp ./remap57.sh.desktop ~/.config/autostart
#printf ${boldblue}" É necessário aplicar o autostart para esse script manualmente ${clear}\n"
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
# Correção de DPI
elif [ $opt = "6" ];then
printf ${boldorange}"** Configuração de DPI **${clear}\n"
sleep 02;
printf ${orange}"* Criando o arquivo '/usr/share/X11/xorg.conf.d/20-nvidia.conf'${clear}\n"
sudo nvidia-xconfig
sudo cp /etc/X11/xorg.conf /usr/share/X11/xorg.conf.d/20-nvidia.conf
printf ${boldorange}"* Copie o comando abaixo:${clear}\n"
sleep 02;
echo '    Option "UseEdidDpi" "False"'
echo '    Option "DPI" "96 x 96"'
printf ${boldorange}"* Cole o comando acima dentro da parte ${red}'Section "Device"'${clear}\n"
sleep 01;
printf ${green}"*** Aperte ${red}'ENTER'${green} para abrir o NANO.${clear}\n" && read
sudo nano /usr/share/X11/xorg.conf.d/20-nvidia.conf
sleep 02;
printf ${boldblue}" As mudanças entraram em vigor após reiniciar o PC${clear}\n"
sleep 02;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

#############################
## Apps extras
#Nala (APT backend)
elif [ $opt = "n" ];then
printf ${boldorange}"* Instalando o Nala (apt backend) *${clear}\n"
sleep 02;
echo "deb [arch=amd64,arm64,armhf] http://deb.volian.org/volian/ scar main" | sudo tee /etc/apt/sources.list.d/volian-archive-scar-unstable.list
wget -qO - https://deb.volian.org/volian/scar.key | sudo tee /etc/apt/trusted.gpg.d/volian-archive-scar-unstable.gpg > /dev/null
sudo apt update && sudo apt install nala
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh

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
