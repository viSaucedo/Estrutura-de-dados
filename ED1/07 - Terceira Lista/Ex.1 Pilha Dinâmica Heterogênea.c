#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

   
typedef struct {
	int registroAluno;
	float rendaFamiliar;
	} REGISTRO;

typedef struct aux {
	REGISTRO registro;
	struct aux *endereco_proximo_elemento;
	} ELEMENTO;

typedef struct {
	ELEMENTO *endereco_topo;
	} PILHA;

void inicializa(PILHA *p) {
	p->endereco_topo = NULL;

	}

	int insereNaPilha(PILHA *p, REGISTRO registro) {
	ELEMENTO *novo_elemento = (ELEMENTO*) malloc(sizeof(ELEMENTO));

	if(novo_elemento == NULL) return 0; 

	novo_elemento->registro = registro ;
	novo_elemento->endereco_proximo_elemento = p->endereco_topo;
	p->endereco_topo = novo_elemento;

	return 1 ;
}

void imprime(PILHA *p){
	ELEMENTO *p_elemento_atual = p->endereco_topo;
	if(p_elemento_atual == NULL) printf("\n Não há elementos na pilha. \n")	;
	
	while(p_elemento_atual != NULL){
		printf("\nRegistro aluno : %i", p_elemento_atual->registro.registroAluno);
		printf("\nRenda Familiar : %f", p_elemento_atual->registro.rendaFamiliar);
		p_elemento_atual = p_elemento_atual->endereco_proximo_elemento;
	}
}
void main() {
	setlocale(LC_ALL, "Portuguese");

	PILHA pilha;
	inicializa(&pilha);
	REGISTRO e;
	e.registroAluno = 1;
	e.rendaFamiliar = 2500;
	insereNaPilha(&pilha, e);	
	imprime(&pilha);
	
}









