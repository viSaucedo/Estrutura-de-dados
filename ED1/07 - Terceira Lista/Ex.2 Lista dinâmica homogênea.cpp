#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct aux {
	int valor;
	struct aux *ponteiro_proximo_elemento;
} ELEMENTO;

typedef struct {
	ELEMENTO *ponteiro_primeiro_elemento;
}LISTA;

void inicializa(LISTA *l){
	l->ponteiro_primeiro_elemento = NULL; 
}


int insereNoInicio(LISTA *l, int valor) {
	ELEMENTO *novo_elemento = (ELEMENTO*) malloc(sizeof(ELEMENTO));
	if(novo_elemento == NULL) return 0;
	novo_elemento->valor = valor ; 
	novo_elemento->ponteiro_proximo_elemento = l->ponteiro_primeiro_elemento;
	l->ponteiro_primeiro_elemento = novo_elemento;
	return 1; 	 
}
 

int excluirPrimeiroElemento(LISTA *l) {
	
		
}



void main() {
	LISTA lista;
	int resposta = insereNoInicio(&lista, 5);
	
	printf("\n%i", resposta);
}
