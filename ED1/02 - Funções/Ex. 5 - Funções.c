#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
  int i, n, result = 0, aux = 1 , aux2 = 0; 
	
  setlocale(LC_ALL, "Portuguese");
  printf("\nDigite um número para o calculo da sequecia de Fibonacci  : ");
  scanf("%d", &n);
    
  int calcula_e_exibe_fibonacci (){
		result = aux2 + aux;
  		aux2 = aux ; 
  		aux = result ; 
		return result ;
	}
	
    printf("\n %d", result);
  	printf("\n %d", result + 1);
	
	for(i = 1 ; i <= n ; i++){
		printf("\n %d", calcula_e_exibe_fibonacci ());
	}
	
}
