#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float i, n, result = 0 ;
	
  setlocale(LC_ALL, "Portuguese");
    
  void calcula_e_exibe(){
  	
	  	printf("\nDigite um número para o calculo : ");
  		scanf("%f", &n);
		
		for(i = 1 ; i < n ; i++){
			result = result + 1/(n-i) ;
		}
		printf("\nO resultado é %f" , result);
  	
  }
	calcula_e_exibe();
}
