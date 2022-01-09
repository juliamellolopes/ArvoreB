#ifndef FUNCOES_H
#define FUNCOES_H

#include "btree.h"

#include <string.h>
#include <stdio.h>

void inicializa(Pagina **btree, Record r);
void inseri(Pagina **btree, Record r, int cpf);
void imprimir(Pagina **btree, Record r,int cpf);

#endif