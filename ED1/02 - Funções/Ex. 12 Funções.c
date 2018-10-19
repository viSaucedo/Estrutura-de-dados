#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct date{
	int dia, mes , ano ;
};
struct date d1, d2 ;


void main(){
	
  
  setlocale(LC_ALL, "Portuguese");

  do {
  	
	  	printf("\nDigite a primeira data :\nDia : ");	
	 	scanf("%d", &d1.dia);
	 	printf("Mês : ");
		scanf("%d", &d1.mes);
		printf("Ano : ");
		scanf("%d", &d1.ano);
	
		
	  	printf("\nDigite a segunda data :\nDia : ");	
	 	scanf("%d", &d2.dia);
		printf("Mês : ");
		scanf("%d", &d2.mes);
		printf("Ano : ");
		scanf("%d", &d2.ano);
		if((d1.ano > d2.ano ) || (d1.ano == d2.ano && d1.mes > d1.mes) || (d1.ano == d2.ano && d1.mes == d1.mes && d1.dia > d2.dia)){
			printf("\nA primeira data deve ser menor que a segunda. Digite novamente .\n");
		}

	} while ((d1.ano > d2.ano ) || (d1.ano == d2.ano && d1.mes > d1.mes) || (d1.ano == d2.ano && d1.mes == d1.mes && d1.dia > d2.dia));
	
	int ano_bissexto(int d1_dia, int d1_mes, int d1_ano, int d2_dia, int d2_mes, int d2_ano){
		int i, bi; 
		int bi1 ;
		int total_dias, total_dias1;
		int meses[12];
  		meses[0] = 31 ;
		meses[1] = 28 ;
		meses[2] = 31 ;
		meses[3] = 30 ;
		meses[4] = 31 ;
		meses[5] = 30 ;
		meses[6] = 31 ;
		meses[7] = 31 ;
		meses[8] = 30 ;
		meses[9] = 31 ;
		meses[10] = 30 ;
		meses[11] = 31 ;	 
	
		
		//-------------------------------------------------------------------------------------------------
		
		//Total de dias da segunda data 
		
		
		// Calcula quantos dias tem no ultimo ano da segunda data 
		for(i = 0 ; i > d2_mes ; i++ ){
			
			total_dias = total_dias + meses[i] ; 
			
			printf("\n total de meses %d", meses[i]);

		}
		
		printf("\n total de dias %d", total_dias);
		
			// Calcula quantos anos bissextos tiveram até o ano da segunda data 
		for (i = 1000 ; i <= d2_ano ; i++ ){
			if (d2_ano% 4 == 0 && (d2_ano % 400 == 0 || d2_ano % 100 != 0)) {
    		 bi ++ ;
  			}	
		}
		
		//Calcula total de dias da segunda data 		
		for(i = 0 ; i > d2_ano ; i++ ){
			
			total_dias = total_dias + 365 * d2_ano + bi + d2_dia; 
		
		}
		
		printf("\n total de dias %d", total_dias);
		
	  		if(d2_ano% 4 == 0 && (d2_ano % 400 == 0 || d2_ano % 100 != 0) && ((d2_mes > 1) || (d2_mes == 1 && d2_dia <= 28 ))){
	  			total_dias = total_dias - 1 ;
			 
			  }
			  
		printf("\n total de dias %d", total_dias);
		
		// ----------------------------------------------------------------------------------------------------------
		
		//Total de dias da segunda data 
 
		
		// Calcula quantos dias tem no ultimo ano da segunda data 
		for(i = 0 ; i > d1_mes ; i++ ){
			
			total_dias1 = total_dias1 + meses[i] ; 
			
		}
		
			// Calcula quantos anos bissextos tiveram até o ano da segunda data 
		for (i = 1000 ; i <= d1_ano ; i++ ){
			if (d1_ano% 4 == 0 && (d1_ano % 400 == 0 || d1_ano % 100 != 0)) {
    		bi1 ++ ;
  			}	
		}
		
		//Calcula total de dias da segunda data 		
		for(i = 0 ; i > d1_ano ; i++ ){
			
			total_dias1 = 365 * d1_ano + bi1 + d1_dia;; 
			
		}
			
					
	  		if(d1_ano% 4 == 0 && (d1_ano % 400 == 0 || d1_ano % 100 != 0) && ((d1_mes > 1) || (d1_mes == 1 && d1_dia <= 28 ))){
	  			total_dias1 = total_dias1 - 1 ;
			  }
		
		int dif ;
			
		dif = total_dias - total_dias1 ; 
		return dif ; 
	
	}
	
	int resp;
	
	
	//resp = ano_bissexto(d1.dia, d1.mes, d1.ano, d2.dia, d2.mes, d2.ano);    
    
	printf("\n A diferença são de %d dias ", ano_bissexto(d1.dia, d1.mes, d1.ano, d2.dia, d2.mes, d2.ano));

} 


