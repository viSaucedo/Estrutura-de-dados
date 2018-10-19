#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float nota, frequencia ;
  int alunoAprov;	
  setlocale(LC_ALL, "Portuguese");
	  
  int aluno_Aprovado(){
	  	printf("\nDigite a nota do aluno : ");
	  	scanf("%f", &nota);
	  	printf("\nDigite a frequencia do aluno : ");
	  	scanf("%f", &frequencia);
	  	
	  	if(nota >= 6 && frequencia >= 75) 
		  return 1 ;
		return 0 ; 
  	}
		
		alunoAprov = aluno_Aprovado();
		
		if(alunoAprov == 1) {
			printf("\nAluno Aprovado");
		} else 
			printf("\nAluno Reprovado");		
		
}
