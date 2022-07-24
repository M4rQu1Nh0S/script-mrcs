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
clear && printf ${boldorange}"\n Menu - Emulador Yuzu ${clear}\n"
sleep 01;
#printf ${boldblue}"- Instalação${clear}\n"
#printf "Digite ${boldorange}1${clear} - Baixar o Yuzu (não funcionando)\n\n"
# Fazer Backup
printf ${boldblue}"- Backup${clear}\n"
printf "Digite ${boldorange}2${clear} - Fazer um novo backup\n"
# Restaurar backup
printf ${boldblue}"\n- Restauração${clear}\n"
printf "Digite ${boldorange}3${clear} - Instalar Yuzu & Restaurar um backup existente\n"
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
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/yuzu.sh

# Backup de dados:
elif [ $opt = "2" ];then
printf ${boldred}"*** Atenção - isso vai apagar o backup existente ****${clear}\n"
sleep 06;
printf ${boldgreen}"* Criando um backup do 'Yuzu' *${clear}\n"
rm -r ./data-backup/yuzu
mkdir -p ./data-backup/yuzu/config
mkdir -p ./data-backup/yuzu/local
mkdir -p ./data-backup/yuzu/binary
cp -R $HOME/.config/yuzu ./data-backup/yuzu/config
cp -R $HOME/.local/share/yuzu ./data-backup/yuzu/local
cp -R $HOME/yuzu-linux-2022* ./data-backup/yuzu/binary
sleep 02;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/yuzu.sh

# Restauração de dados:
elif [ $opt = "3" ];then
printf ${boldorange}"* Instalando & Restaurando o 'Yuzu' com backup *${clear}\n"
printf ${boldblue}"** Isto pode demorar um pouco, aguarde... **${clear}\n"
sudo rm -r $HOME/.config/yuzu
sudo rm -r $HOME/.local/share/yuzu
mkdir -p $HOME/.config/yuzu
mkdir -p $HOME/.local/share/yuzu
cp -R ./data-backup/yuzu/config $HOME/.config
cp -R ./data-backup/yuzu/local $HOME/.local/share
cp -rT ./data-backup/yuzu/binary $HOME/
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./scripts/yuzu.sh

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
 
