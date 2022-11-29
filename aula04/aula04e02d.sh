#!/bin/bash 
echo "Este programa lê dois números e compara-os";


echo -n "Insira o primeiro número: "; read a;

echo -n "Insira o segundo número: "; read b;


function comparacao() {
    if [[ $a -eq $b ]]; then
        echo "Números iguais"
    elif [[ $a -gt $b ]]; then
        return $a
    else
        return $b
    fi
}
comparacao

r=$?

if [[ $r -ne "0" ]]; then
    echo $r
fi