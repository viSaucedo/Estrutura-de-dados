#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float raio, area, perimetro,  pi = 3.14159;
  setlocale(LC_ALL, "Portuguese");
  printf("\nDigite o Raio da circunfer�ncia em cm : ");
  scanf("%f", &raio);
  
  void calcula_area(){
  	
  	area = pi* raio * raio;
	printf("\n�rea da circunfer�ncia : %.2f", area);	 
  	
  }
  void calcula_perim(){
  	
  	perimetro = pi* raio * 2;
	printf("\nPer�metro da circunfer�ncia : %.2f", perimetro);	 
  }
	calcula_area();
	calcula_perim();
}

