#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  int n, parOuImpar ;	
	
  setlocale(LC_ALL, "Portuguese");
  
  void recebe_numero(){
  	printf("\nDigite um n�mero : ");
  	scanf("%d", &n);
  }
  
  int par_ou_impar(int n){
  	int res ;
	res = n % 2 ;
  	
	if ( res == 0 )
  		return 0;
  	return 1 ;
  	
  }
  
  recebe_numero();
  
  parOuImpar = par_ou_impar(n); 
  
  if(parOuImpar == 1) {
			printf("\nO n�mero � �mpar");
		} else 
			printf("\nO n�mero � par");
  
}
