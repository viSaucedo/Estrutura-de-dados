#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float n1 , n2 , media ;
  char nome_aluno[30];
  	
  setlocale(LC_ALL, "Portuguese");
  printf("\nDigite o nome do aluno : ");
  gets(nome_aluno);
  printf("\nDigite a primeira nota  : ");
  scanf("%f", &n1);
  printf("\nDigite a segunda nota : ");
  scanf("%f", &n2);
  
  void calcula_e_exibe_media (){
  		media = (n1 + n2)/2 ;
		printf("\nPrezado aluno %s, sua média é %.2f", nome_aluno , media );		
  	
  }
	calcula_e_exibe_media ();
	fflush(stdin);
}
