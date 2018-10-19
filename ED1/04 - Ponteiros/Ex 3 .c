//O resultado é 20
//
//O ponteiro *p aponta para a variavel i(7), enquanto o ponteiro **q , aponta para *p , 
//logo aponta para i também. 


#include <stdio.h>
#include <stdlib.h>


void main (){
	
	int i = 7, j = 3, k = 9 ;
	int *p;
	int **q;
	
	p = &i;
	q = &p ;
		
	int c = **q + j ;
	int resultado_final = 2 * c;
	
	printf("\n%d" , resultado_final );
	
}
