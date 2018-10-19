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
	ELEMENTO *elemento_atual = l->ponteiro_primeiro_elemento;
	ELEMENTO *elemento_anterior = NULL;
	
	if(elemento_atual == NULL) return 0;
	
	l->ponteiro_primeiro_elemento = elemento_atual->ponteiro_proximo_elemento;
	free(elemento_atual);
	return 1;
	
	elemento_atual = elemento_atual->ponteiro_proximo_elemento;	
}



void main() {
	LISTA lista;
//	insereNoInicio(&lista, 5); 
	int resposta = excluirPrimeiroElemento(&lista);
	printf("\n%i", resposta);
}
