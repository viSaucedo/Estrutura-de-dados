#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  float raio, area, perimetro,  pi = 3.14159;
  setlocale(LC_ALL, "Portuguese");
  printf("\nDigite o Raio da circunferência em cm : ");
  scanf("%f", &raio);
  
  void calcula_area(){
  	
  	area = pi* raio * raio;
	printf("\nÁrea da circunferência : %.2f", area);	 
  	
  }
  void calcula_perim(){
  	
  	perimetro = pi* raio * 2;
	printf("\nPerímetro da circunferência : %.2f", perimetro);	 
  }
	calcula_area();
	calcula_perim();
}

