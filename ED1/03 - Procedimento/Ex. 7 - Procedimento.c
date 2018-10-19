#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  int i, n, result = 0, aux = 1 , aux2 = 0; 
	
  setlocale(LC_ALL, "Portuguese");
    
  void calcula_e_exibe_fibonacci (){
  	
	  	printf("\nDigite um número para o calculo da sequecia de Fibonacci  : ");
  		scanf("%d", &n);
  		printf("\n %d", result);
  		printf("\n %d", result + 1);
		
		for(i = 1 ; i <= n ; i++){
			
		  	result = aux2 + aux;
  			printf("\n %d", result);
  			aux2 = aux ; 
  			aux = result ; 
		}

  }
	calcula_e_exibe_fibonacci ();
	
}
