#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float n1 , result = 1;
  int i ; 
	
  setlocale(LC_ALL, "Portuguese");
    
  void calcula_e_exibe_fatorial (){
  	
	  	printf("\nDigite um número para o calculo do fatorial : ");
  		scanf("%f", &n1);
		for(i = 1 ; i <= n1 ; i++){
			result = result * i ;
		}
		printf("\nO resultado é %.0f", result);
  	
  }
	calcula_e_exibe_fatorial ();
	
}
