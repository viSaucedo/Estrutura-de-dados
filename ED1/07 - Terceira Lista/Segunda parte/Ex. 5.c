//LISTA ESTÁTICA HOMOGENEA

#include <stdlib.h>
#include <stdio.h>
#define MAX 10 

typedef struct {
	
	int elementos[MAX];
	int nro_elementos;	
} LISTA;

LISTA lista ;

void inicio_lista(){
	lista.nro_elementos = 0;
}

int nroElementos(){
	return lista.nro_elementos;	
}

void imprimeLista(){
	int i ;
	for( i = 0 ; i < lista.nro_elementos; i++){
		printf("\nValor na posicao %d = %d", i , lista.elementos[i]);
	} 
	
	printf("\n\nTotal de elementos %d\n", lista.nro_elementos);
}


int insere(int posicao, int valor){
	if(lista.nro_elementos == MAX 	|| posicao < 0 || posicao > lista.nro_elementos){
		return 0;	
	} else {
		int i ;
		for(i=lista.nro_elementos ; i > posicao ; i-- ){
			lista.elementos[i] = lista.elementos[i-1];
			}
			
		lista.elementos[i] = valor ;
		lista.nro_elementos ++;
		return 1;			
	}
}



int excluiPorPosicao(){
	
	int i ;
	int posicao = lista.nro_elementos/2;
	printf("\n\nPosicao excluída %d\n", posicao);
	
	for(i = posicao ; i < lista.nro_elementos-1 ; i++){
		lista.elementos[i] = lista.elementos[i+1];
		}
		lista.nro_elementos--;
		return 1; 
}

void main(){
	
	inicio_lista();
	
	insere(0,4);
	insere(1,7);
	insere(2,2);
	insere(3,6);
	insere(4,3);
	insere(5,8);
	insere(6,9);
	insere(7,8);

	imprimeLista();

	
	excluiPorPosicao();
	
	imprimeLista();
}






