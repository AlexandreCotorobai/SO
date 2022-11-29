#!/bin/bash
# Conditional block if
if $1 ; then
    echo "Verdadeiro"
else
    echo "Falso"
fi 

# para ls da True pq o comando existe, xpto, 1 e 0 dá False porque nao sao um comando
# true ou false apenas responde a existencia ou inexistencia do comando
