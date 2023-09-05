#include <stdio.h>
#include <stdlib.h>
#include "pilhapos.h"

void criar(Pilha*p){
	p->topo=-1;
}

void empilhar(Pilha*p,int x){
	p->topo++;
	p->elementos[p->topo]=x;
	printf("%d foi empilhado!\n",x);
	
}

int desempilha(Pilha*p){
	int a = p->elementos[p->topo];
	p->topo--;
	return a;
}

void exibir(Pilha p){
	printf("%d\n",desempilha(&p));
}
