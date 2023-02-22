#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() 
 {
 	float  num, potencia,cubo,quadrado,cubico ;
 	printf ("Digite o numero: ");
 	scanf("%f",&num);

 	
 	potencia= pow(num,2);
 	printf("\n A potencia do numero e: %0.2f",potencia);
 	cubo= pow(num,3);
 	printf("\n O cubo do numero e: %0.2f",cubo);
 	quadrado=sqrt(num);
 	printf("\n O quadrado do numero e: %0.2f",quadrado);
 	cubico=pow(num,1.0/3.0);
 	printf("\n O cubico do numero e: %0.2f",cubico);
 	
 	
 	
	return 0;
}
