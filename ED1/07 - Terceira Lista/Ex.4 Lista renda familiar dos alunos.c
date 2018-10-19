#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 30

typedef struct {
	int registroAcademico;
	float rendaFamiliar;
} ALUNO;

ALUNO alunos[MAX];

	int numeroAlunosInseridosNoVetor = 0;
	
	int insereAlunoNoVetor(ALUNO aluno) {
		
		if(numeroAlunosInseridosNoVetor == MAX)
			return 0;
		
		alunos[numeroAlunosInseridosNoVetor] = aluno;
		numeroAlunosInseridosNoVetor++;
		}
	
	float mediaRendasFamiliares() {
	}
