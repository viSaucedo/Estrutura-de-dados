#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
  setlocale(LC_ALL, "Portuguese");
  
  int n, n1, sum ;
  
  printf("\nDigite o primeiro n�mero : ");
  scanf("%d", &n);
  printf("\nDigite o segundo n�mero : ");
  scanf("%d", &n1);
  
  int soma (int n, int n1){
	sum = n + n1 ;  
  	return sum;
  }

  printf("\nA soma �  %d", soma(n, n1));
  
  

}
