#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float n1 , n2 , media ;
	
  setlocale(LC_ALL, "Portuguese");
  printf("\nDigite um n�mero : ");
  scanf("%f", &n1);
  printf("\nDigite mais um n�mero : ");
  scanf("%f", &n2);
  
  void calcula_e_exibe_media (){
  		media = (n1 + n2)/2 ;
		printf("\nA m�dia entre os n�meros � %.2f", media );		
  	
  }
	calcula_e_exibe_media ();
	
}
