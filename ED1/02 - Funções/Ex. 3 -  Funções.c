#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	float raio ;
	float perimetro ;
	float area ;	
} tipo_circulo ;

void main(){
  
  float pi = 3.14159;
  tipo_circulo circulo;
  
  setlocale(LC_ALL, "Portuguese");
  printf("\nDigite o Raio da circunfer�ncia em cm : ");
  scanf("%f", &circulo.raio);
  
  tipo_circulo calcula_area_perim( float raio){
  	
  	circulo.area = pi* raio *raio;	
  	circulo.perimetro = pi* raio * 2;
  	
  	
  	return circulo 	;
  
  
  }
	calcula_area_perim(circulo.raio);
	
	printf("\n�rea da circunfer�ncia : %.2f cm� ", circulo.area );
	printf("\nPer�metro da circunfer�ncia : %.2f cm ", circulo.perimetro);
	printf("\nRaio da circunfer�ncia : %.2f cm ", circulo.raio);
}

