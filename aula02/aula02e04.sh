#!/bin/bash
echo "O meu editor por omissão BASH $BASH \$BASH"
echo 'O meu editor por omissão BASH $BASH \$BASH'
echo $(( 5 + 5 ))
(( 5 > 0 )) && echo "cinco é maior do que zero"
today=$(date); echo $today


echo -e "\nTodos os ficheiros e directorioas:\n"
ls -l -d /etc/*
echo -e "\nTodos os ficheiros e directorias que começam por 'a':\n"
ls -l -d /etc/a*
echo -e "\nTodos os que começam por 'a' e têm mais de 3 caracteries:\n"
ls -l -d /etc/a???*
echo -e "\nTodos os ficheiros e directorias com 'conf' no nome:\n"
ls -l -d /etc_/*conf*