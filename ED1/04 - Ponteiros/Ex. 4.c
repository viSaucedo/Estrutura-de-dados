#include <stdio.h>
#include <stdlib.h>

int n , *p ;


int atribuiValorAoPonteiro(){
 	
	printf("\nDigite um numero inteiro : ");
 	scanf("%d", &n);
 	
	p = &n; 
 	return p;
 }

int fat(int *p){
	int result = 1, i ;
	for(i = 1 ; i <= *p ; i++){
		
		result = i * result	;	
		}

	return result ;	
}


void main (){
	
	printf("%d", fat(atribuiValorAoPonteiro()));
	
}
