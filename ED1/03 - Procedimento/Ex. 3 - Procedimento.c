#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float n1 , n2 , media ;
  char nome_aluno[30];
  int sair;
  	
  setlocale(LC_ALL, "Portuguese");
  
  void recebe_dados(){
	  printf("\nDigite o nome do aluno : ");
	  gets(nome_aluno);
	  printf("\nDigite a primeira nota  : ");
	  scanf("%f", &n1);
	  printf("\nDigite a segunda nota : ");
	  scanf("%f", &n2);
	}
	
	
	void calcula_e_exibe_media (){
	  	media = (n1 + n2)/2 ;
		printf("\nPrezado aluno %s, sua média é %.2f\n", nome_aluno , media );		
	  	
	  }
	  
	do{
	  	recebe_dados();
		calcula_e_exibe_media ();
		printf("\nDeseja calcular outra média?\n\n0.Sair \n\n1.Sim \n");
		scanf("%d", &sair);
		fflush(stdin);
	}while (sair == 1);
	
	exit(0);
}
