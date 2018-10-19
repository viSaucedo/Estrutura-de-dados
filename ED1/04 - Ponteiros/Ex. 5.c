#include <stdio.h>
#include <stdlib.h>

int i ;


int le_inteiro(){
 	
	printf("\nDigite um numero inteiro : ");
 	scanf("%d", &i);
 	int *p;
 	p = &i; 
 	return p;
 	
 }

void main (){
	int *result = le_inteiro();
	*result *= *result ;
	
	printf("%d", *result);
	
	
}
