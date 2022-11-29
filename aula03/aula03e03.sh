#!/bin/bash
# This script checks the existence of a file

[[ $# = 1 ]] || { echo "Erro: Indique ficheiro" >&2; exit 1; }

if [[ -d $1 ]] ; then
    echo "$1 é diretoria"
else
    echo "$1 nao é diretoria"
fi

echo "Checking..."
if [[ -f $1 ]] ; then
    echo "$1 ficheiro existe."
else
    echo "$1 ficheiro não existe"
fi
echo "...done."
