#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
  setlocale(LC_ALL, "Portuguese");
  
  int i ;
  float n, n1, n2  ;
  
  
  printf("\nDigite o primeiro número : ");
  scanf("%f", &n);
  printf("\nDigite o segundo número : ");
  scanf("%f", &n1);
  printf("\nDigite o terceiro número : ");
  scanf("%f", &n2);
  
  
  float max (float n, float n1, float n2){
	
	float numero[3], aux = 0 ; 
	int i ; 
	
	numero[0] = n ;
	numero[1] = n1 ;
	numero[2] = n2 ;
  	
	  for(i = 0 ; i < 3 ; i++){
  		 if (numero[i] > numero[i+1]){
		   aux = numero[i];
		   } 
	 }
	  
  	return aux;
  }
    void mostra(){
  	printf("\nO maior número digitado é : %.2f", max(n ,n1 , n2));
  	
  }
  

  mostra();

}
