#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

 	//declarando variáveis
 	float nota1,nota2,nota3,nota4,media;
 	//inserindo dados
    printf ("digite a 1 nota ");
        scanf("%f",&nota1);
    printf("digite a 2 nota ");
        scanf("%f",&nota2);
    printf("digite a 3 nota ");
        scanf("%f",&nota3);
    printf("digite a 4 nota ");
        scanf("%f",&nota4);
 	//executando calculo
 media=(nota1+nota2+nota3+nota4)/4;
    printf("media é %f",media);
 	
 	
	return 0;
}


