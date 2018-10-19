#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
  setlocale(LC_ALL, "Portuguese");
  
  int n, i ;
  
  printf("\nDigite a quantide de números que serão digitados : ");
  scanf("%d", &n);
  
  int max (int n){
	
	int numero[n], aux = 0 ; 
		  	
	for(i = 0 ; i < n ; i++){
  		printf("\n%d. ", i + 1 );
  		scanf("%d", &numero[i]);
  		 if (numero[i - 1] > numero[i]) {
  		 
		   	aux = numero[i-1];
		   } 
	  }
	  
	  
  	return aux;
  }

  printf("\nO maior número digitado é : %d", max(n));
  
  

}
