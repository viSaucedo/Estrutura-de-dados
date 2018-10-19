#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float n1 , n2 , media ;
	
  setlocale(LC_ALL, "Portuguese");
  printf("\nDigite um número : ");
  scanf("%f", &n1);
  printf("\nDigite mais um número : ");
  scanf("%f", &n2);
  
  void calcula_e_exibe_media (){
  		media = (n1 + n2)/2 ;
		printf("\nA média entre os números é %.2f", media );		
  	
  }
	calcula_e_exibe_media ();
	
}
