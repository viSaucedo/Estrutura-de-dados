#include <stdlib.h>
#include <stdio.h>
#include "listaestatica.h"


void main(){
	
	inicio_lista();
	
	insere(0,4);
	insere(1,7);
	insere(2,2);
	insere(3,6);
	insere(4,3);
	insere(5,8);
	imprimeLista();
	
	printf("Inserindo 5 na posicao 2 \n");
	insere(2, 5);
	imprimeLista();
}
