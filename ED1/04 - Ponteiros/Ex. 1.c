#include <stdio.h>
#include <stdlib.h>


void main (){
	
	int a, b , *pa, *pb ;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	pa = &a ;
	pb = &b ;
	
	printf("\n%d", *pa  );
	printf("\n%d" , *pb  );
	
}
