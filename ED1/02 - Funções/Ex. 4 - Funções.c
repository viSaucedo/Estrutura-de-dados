#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float n1 , result = 1;

	
  setlocale(LC_ALL, "Portuguese");
  	printf("\nDigite um número para o calculo do fatorial : ");
  	scanf("%f", &n1);
    
  float fatorial (float n1){
  			
  		if ( n1 <= 1 )
    	 //Caso base: fatorial de n <= 1 retorna 1
    		 return (1);
  		else {
     
     result = n1 * fatorial(n1 - 1);
     return (result);
  }
  	
  }
	printf("\nO resultado é %.0f", fatorial (n1));
	
}
