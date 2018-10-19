#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  int n, primo , aux = 0;	
	
  setlocale(LC_ALL, "Portuguese");
  
  printf("\nDigite o número : ");
  scanf("%d", &n);
  
  int num_primo(int n){
  	
	int i, res;
		
	for( i = 1 ; i <= n ; i++ ){
		res = n % i ;
		if(res == 0){
			aux++; 
		}
	}
	
	if(aux <=  2 ){
		return 1;
	} else return 0;
  }
  
  void mostra(){
  	
  	primo = num_primo(n);
  	if (primo == 1){
  		
  		printf("\nO número é primo");
  		
	  } else printf("\nO número não é primo");
  }
  
  mostra();

  
}
