#include <stdio.h>
#include <stdlib.h>


void main (){
	
	int a, b ,aux , *pa, *pb ;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	pa = &a ;
	pb = &b ;

//	printf("\n%d - antes da troca ", *pa  );
//	printf("\n%d" , *pb  );
	
	aux = *pa ;
	*pa = *pb;
	*pb = aux ;

	printf("\n%d - depois da troca ", a  );
	printf("\n%d" , b  );
	

}
