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
clear && printf ${boldorange}"\n Menu - Lutris ${orange}(via PPA)${clear}\n"
sleep 01;
printf ${boldblue}"- Instalação${clear}\n"
printf "Digite ${boldorange}1${clear} - Baixar o Lutris\n\n"
# Fazer Backup
printf ${boldblue}"- Backup${clear}\n"
printf "Digite ${boldorange}2${clear} - Fazer um novo backup\n"
# Restaurar backup
printf ${boldblue}"\n- Restauração${clear}\n"
printf "Digite ${boldorange}3${clear} - Restaurar um backup existente\n"
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
printf ${orange}"* Baixando o pacote lutris${clear}\n"
sleep 01;
sudo add-apt-repository ppa:lutris-team/lutris
sudo apt update
sudo apt install -y lutris
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/lutris.sh

# Backup de dados:
elif [ $opt = "2" ];then
printf ${boldred}"*** Atenção - isso vai apagar o backup existente ****${clear}\n"
sleep 06;
printf ${boldgreen}"* Criando um backup do 'lutris' *${clear}\n"
# lutris
rm -r ./data-backup/lutris
mkdir -p ./data-backup/lutris/config
mkdir -p ./data-backup/lutris/local
cp -R $HOME/.config/lutris ./data-backup/lutris/config
cp -R $HOME/.local/share/lutris ./data-backup/lutris/local
sleep 02;
# wineprefixes
rm -r ./data-backup/wineprefixes
cp -R $HOME/.local/share/wineprefixes ./data-backup/wineprefixes
sleep 02;

printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/lutris.sh

# Restauração de dados:
elif [ $opt = "3" ];then
printf ${boldorange}"* Restaurando o backup do 'Rambox' *${clear}\n"
printf ${boldblue}"** Isto pode demorar um pouco, aguarde... **${clear}\n"
# lutris
sudo rm -r $HOME/.config/lutris
sudo rm -r $HOME/.local/share/lutris
mkdir -p $HOME/.config/lutris
mkdir -p $HOME/.local/share/lutris
cp -R ./data-backup/lutris/config $HOME/.config
cp -R ./data-backup/lutris/local $HOME/.local/share
sleep 03;
# wineprefixes
sudo rm -r $HOME/.local/share/wineprefixes
cp -R ./data-backup/wineprefixes $HOME/.local/share/
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/lutris.sh

# Retorno ou sair do script
elif [ $opt = "v" ];then
exec ./run_script.sh

elif [ $opt = "q" ];then
exit;

else
printf ${boldred}"\nOpção não encontrada, verifique o menu e selecione a opção correta${clear}\n"
printf "\nDica: não use caixa alta\n"
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./run_script.sh
fi # final do script 
 
