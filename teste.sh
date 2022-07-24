#!/bin/bash

echo -ne "Digite uma letra : "
read -n1 -s letra # Se nao me engano , captura apenas uma tecla , sem precisar esperar o enter

# Usando If / Elif

if [ $letra = "a" ];then
	echo "Voce digitou a letra '$letra'"

elif [ $letra = "b" ];then
	echo "Voce digitou a letra '$letra'"

elif [ $letra = "c" ];then
	echo "Voce digitou a letra '$letra'"

elif [ $letra = "d" ];then
	echo "Voce digitou a letra '$letra'"

elif [ $letra = "e" ];then
	echo "Voce digitou a letra '$letra'"

else
	echo "Letra digitada nao foi reconhecida pelos if's , Desculpe D=" # Huehueuhehue , zoeira
fi

# Usando o case

case $letra in
	"a")
		echo "Voce digitou a letra '$letra'"
	;;
	"b")
		echo "Voce digitou a letra '$letra'"
	;;
	"c")
		echo "Voce digitou a letra '$letra'"
	;;
	"d")
		echo "Voce digitou a letra '$letra'"
	;;
	"e")
		echo "Voce digitou a letra '$letra'"
	;;
	*)
		echo "Letra digitada nao foi reconhecida pelo case , Desculpe D="
	;;
esac 
