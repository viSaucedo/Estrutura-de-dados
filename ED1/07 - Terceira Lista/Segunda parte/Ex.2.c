#include <stdlib.h>
#include <stdio.h>
typedef struct aux {
	int valor;
	struct aux *ponteiro_proximo_elemento;
} ELEMENTO;

typedef struct {
	ELEMENTO *ponteiro_primeiro_elemento;
}LISTA;


void inicio(LISTA *l){
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
 

int insereNoFim(LISTA *l, int valor) {
	ELEMENTO *novo_elemento = (ELEMENTO*) malloc(sizeof(ELEMENTO));
	if(novo_elemento == NULL) return 0;
	novo_elemento->valor = valor ; 
	ELEMENTO *elemento_atual = l->ponteiro_primeiro_elemento;
	while(elemento_atual->ponteiro_proximo_elemento != NULL){
		elemento_atual = elemento_atual->ponteiro_proximo_elemento;
	}
	
	novo_elemento->ponteiro_proximo_elemento = NULL;
	elemento_atual->ponteiro_proximo_elemento = novo_elemento;
	return 1; 	 
	
}
 

void main() {
LISTA lista;
inicio(&lista);
insereNoInicio(&lista, 7);
insereNoInicio(&lista, 4);
int ok = insereNoFim(&lista, 5);
	printf("\n%d", ok);
}
