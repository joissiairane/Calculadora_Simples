#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	setlocale(LC_ALL,"Portuguese");
	//declarando variaveis
	
	 float Vol,r,PI=3.14   ;
	 //executando comando
	 printf("Digite valor do raio � :");
         scanf("%f",&r);
         Vol=(4*PI)*pow(r,3)/3;
        
        printf("O Volume da Esfera � :%3.2f", Vol);
	 
	return 0;
}
