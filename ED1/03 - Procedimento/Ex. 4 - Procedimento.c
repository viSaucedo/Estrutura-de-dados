#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
 float umidade, precipitacao ;
	
  setlocale(LC_ALL, "Portuguese");
  
  void recebe_dados(){
	printf("\nBem vindo!\n\nDigite o valor, nos últimos 15 dias, para : ");	
	printf("\n\nUmidade do ar : ");
	scanf("%f", &umidade);
  	printf("\n\nÍndice de precipitação pluviométrica, em mm : ");
	scanf("%f", &precipitacao);
  }
  void calcula_irrigacao(){
	if(umidade< 45 && precipitacao > 30){
		printf("\n\nQuantidade a irrigar : 35 mm")	;			
		}else printf("\n\nQuantidade a irrigar : 10 mm"); 
	}	
	
	recebe_dados();
	calcula_irrigacao();
}
