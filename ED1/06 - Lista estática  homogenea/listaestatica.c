//LISTA ESTÁTICA HOMOGENEA

#include <stdlib.h>
#include <stdio.h>
#include "listaestatica.h"

//DEFINE A QUANTIDADE MÁXIMA DE ELEMENTOS
#define MAX 10 

//ESTRUTURA COM VARIAVEIS DO TIPO INT 
typedef struct {
	
	int elementos[MAX];
	int nro_elementos;	
} LISTA;

//VARIAVEL GLOBAL DO TIPO LISTA 
LISTA lista ;

//INICIALIZANDO A LISTA
void inicio_lista(){
	lista.nro_elementos = 0;
}

//RETORNANDO O NUMERO DE ELEMENTOS

int nroElementos(){
	return lista.nro_elementos;	
}

//IMPRIMIR OS VALORES DA LISTA
void imprimeLista(){
	int i ;
	for( i = 0 ; i < lista.nro_elementos; i++){
		printf("\nValor na posicao %d = %d", i , lista.elementos[i]);
	} 
	
	printf("\n\nTotal de elementos %d\n", lista.nro_elementos);
}

//BUSCA O PRIMEIRO VALOR 
int primeiroValor(int valor){
	int i ;
	for(i = 0; i < lista.nro_elementos ; i++){
		if(lista.elementos[i] == valor)
		return i ;
	}
	return -1; 
}

//INSERIR VALOR NA LISTA

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

//EXCLUINDO A PRIMEIRO VALOR

int excluiPrimeiroValor(int valor){
	
	if(lista.nro_elementos == 0)
		return 0;
	int i ;
	for(i = 0 ; i < lista.nro_elementos ; i++){
		if(lista.elementos[i] == valor){
			int j ;
			for(j = i; j < lista.nro_elementos -1; j++){
				lista.elementos[j] = lista.elementos[j+1];
			}
			lista.nro_elementos--;
			return 1;
		} 
	}
	return 0;
}

int excluiPorPosicao(int posicao){
	
	if(lista.nro_elementos < posicao || posicao < 0)
		return 0;
	int i ;
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
	imprimeLista();
	
	printf("\nInserindo 5 na posicao 2 \n");
	insere(2, 5);
	imprimeLista();
	
	excluiPorPosicao(3);
	
	imprimeLista();
}






