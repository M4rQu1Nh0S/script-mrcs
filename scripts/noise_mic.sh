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
clear && printf ${boldorange}"\n Filtro de ruído para o microfone${clear}\n"
sleep 01;
printf ${boldblue}"- Instalação${clear}\n"
printf "Digite ${boldorange}1${clear} - Aplicar filtro de ruído para PulseAudio\n\n"
printf ${boldblue}"- Backup${clear}\n"
printf "Digite ${boldorange}2${clear} - Aplicar filtro de ruído para PipeWire-Pulse\n\n"
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
printf ${orange}"** Aplicando o filtro de ruído (PulseAudio): **${clear}\n"
sleep 01;
printf ${orange}"Fazendo backup do arquivo 'default.pa' para 'default.pa.bak'${clear}\n"
sudo cp /etc/pulse/default.pa /etc/pulse/default.pa.bak
sleep 03;
printf ${orange}"Copiando 'filtro-microfone.pa' para o destino /etc/pulse/default.pa${clear}\n"
sudo cp ./filtro-microfone.pa /etc/pulse/default.pa
echo "Reiniciando o pulse audio" && sleep 01;
pulseaudio -k
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./noise_mic.sh

# Backup de dados:
elif [ $opt = "2" ];then
printf ${orange}"** Aplicando o filtro de ruído (PipeWire-Pulse): **${clear}\n"
sleep 01;
printf ${orange}"Fazendo backup do arquivo 'pipewire-pulse.conf' para 'pipewire-pulse.conf'${clear}\n"
sudo cp /usr/share/pipewire/pipewire-pulse.conf /usr/share/pipewire/pipewire-pulse.conf.bak
sleep 03;
printf ${orange}"Copiando 'filtro-microfone.pa' para o destino /etc/pulse/default.pa${clear}\n"
sudo cp ../pipewire-pulse.conf /usr/share/pipewire/pipewire-pulse.conf
echo "Reiniciando o PipeWire" && sleep 01;
systemctl --user restart pipewire pipewire-pulse
sleep 03;
printf ${boldgreen}"*** Aperte ${boldred}'ENTER'${boldgreen} para voltar ao menu.${clear}\n" && read
exec ./noise_mic.sh

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

