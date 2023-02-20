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
clear && printf ${boldorange}"\n Menu - Rambox ${orange}(Versão DEB-GET)${clear}\n"
sleep 01;
printf ${boldblue}"- Instalação${clear}\n"
printf "Digite ${boldorange}1${clear} - Baixar o Rambox\n"
# Fazer Backup
printf ${boldblue}"\n- Backup${clear}\n"
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
printf ${orange}"* Baixando o 'Rambox' com DEB-GET${clear}\n"
deb-get install rambox
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/rambox-debget.sh

# Backup de dados:
elif [ $opt = "2" ];then
printf ${boldred}"*** Atenção - isso vai apagar o backup existente ****${clear}\n"
sleep 06;
printf ${boldgreen}"* Fechando o app 'Rambox' *${clear}\n"
killall rambox
sleep 01;
printf ${boldgreen}"* Criando um backup do 'Rambox' *${clear}\n"
rm -r ./data-backup/rambox
cp -R $HOME/.config/rambox ./data-backup/
sleep 02;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/rambox-debget.sh

# Restauração de dados:
elif [ $opt = "3" ];then
printf ${boldorange}"* Restaurando o backup do 'Rambox' *${clear}\n"
sleep 01;
printf ${boldblue}"** Isto pode demorar um pouco, aguarde... **${clear}\n"
sudo rm -r $HOME/.config/rambox
mkdir -p $HOME/.config/rambox
cp -R ./data-backup/rambox $HOME/.config
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/rambox-debget.sh

# Retorno ou sair do script
elif [ $opt = "v" ];then
exec ./run_script.sh

elif [ $opt = "q" ];then
exit;

else
printf ${boldred}"\nOpção não encontrada, verifique o menu e selecione a opção correta${clear}\n"
printf "\nDica: não use caixa alta\n"
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/rambox-debget.sh
fi # final do script 
