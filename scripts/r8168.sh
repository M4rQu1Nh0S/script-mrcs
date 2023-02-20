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

#############################
# Menu de seleção - comeco
clear && printf ${boldorange}"\n Script de instalação - R8168${clear}\n"
sleep 01;
printf ${boldblue}"- Dependencias para compilação:${clear}\n"
printf "Digite ${boldorange}1${clear} - Ubuntu e derivados\n\n"
printf ${boldblue}"- Instalação${clear}\n"
printf "Digite ${boldorange}9${clear} - ${boldclear}Começar a instalação do driver${clear}\n\n"
sleep 01;
# Opcao retorno
printf ${orange}"\n*Digite ${boldred}"V"${orange} para voltar ao menu principal*${clear}\n"
sleep 01;
printf ${boldorange}"\nSelecione uma opção:${clear}\n"
# Menu de selecao - fim

## Instruções:
# Instalação de pacotes
read -n1 -s opt
if [ $opt = "1" ];then
printf ${orange}"** Instalando as dependencias... **${clear}\n"
sleep 01;
sudo apt install -y dkms build-essential linux-headers-generic
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/r8168.sh

# Backup de dados:
elif [ $opt = "9" ];then
printf ${orange}"** Instalando o driver **${clear}\n"
cp -r r8168-8.051.02 ~/
sudo ~/r8168-8.051.02/autorun.sh
sudo ~/r8168-8.051.02/dkms_script.sh
sudo bash -c "printf 'blacklist r8169' > /etc/modprobe.d/blacklist-r8169"
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/r8168.sh

# Retorno ou sair do script
elif [ $opt = "v" ];then
exec ./run_script.sh

elif [ $opt = "q" ];then
exit;

else
printf ${boldred}"\nOpção não encontrada, verifique o menu e selecione a opção correta${clear}\n"
printf "\nDica: não use caixa alta\n"
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/r8168.sh
fi # final do script

