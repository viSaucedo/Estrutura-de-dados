#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  
  float i, n, result = 0 , aux = 1;
	
  setlocale(LC_ALL, "Portuguese");
  	  	
	printf("\nDigite um número para o calculo : ");
  	scanf("%f", &n);
    
  float calcula_e_exibe(float n){
		
		for(i = 1 ; i < n ; i++){
			result = result + 1/(aux * i) ;
			aux = aux * i ;
		}
		return result ; 
  	
  }
	printf("\nO resultado é %f" , calcula_e_exibe(n));
}
