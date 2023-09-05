#include <stdio.h>
#include <stdlib.h>
#include "pilhapos.h"

int main(int argc, char *argv[]) {
	int p,i;
	Pilha p2;
	criar(&p2);
for(i=0;i<MAX;i++){
	printf("digite elementos da pilha:");
    scanf("%d",&p);
    empilha(&p2,p);	
}
exibir(p2);

	return 0;
}
