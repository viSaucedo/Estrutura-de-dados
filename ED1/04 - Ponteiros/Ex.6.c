#include <stdio.h>
#include <stdlib.h>

float n1, n2, n3 ;
float *pn1,*pn2,*pn3;

float le_numero(){
 	
	printf("\nDigite 3 numeros  : ");
 	scanf("%f", &n1);
 	scanf("%f", &n2);
 	scanf("%f", &n3);
 	pn1 = &n1;
	pn2 = &n2;
	pn3 = &n3; 
		
 }

void main (){
	le_numero();
	float **aux1, **aux2, **aux3;
	
	if(*pn1 < *pn2 && *pn1 < *pn3) {
		**aux1 = *pn1;
		if(*pn2 < *pn3){
			**aux2 = *pn2;
			**aux3 = *pn3;
		}else {
			**aux2 = *pn3;
			**aux3 = *pn2;
		}
		
	}else if(*pn1 > *pn2 && *pn1 > *pn3){
		**aux3 = *pn1 ;
		if(*pn2 < *pn3){
			**aux1 = *pn2;
			**aux2 = *pn3;
		}else {
			**aux1 = *pn3;
			**aux2 = *pn2;
		}
		
	}else if(*pn1 < *pn2 || *pn1 < *pn3){
		**aux2= *pn1;
		
		if(*pn2 < *pn3){
			**aux1 = *pn2;
			**aux3 = *pn3;
		}else {
			**aux1 = *pn3;
			**aux3 = *pn2;
		}		
	}
	

		
	printf("%.f", **aux1);
	printf("%.f", **aux2);					
	printf("%.f", **aux3);

}
