#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

 	//declarando variáveis
 	float pi=3.14,r,area;
 	//inserindo dados
 	printf("Digite o valor de r: ");
 	scanf("%f",&r);
 	//executando calculo
 	area = (r*r)*pi;
 	printf("A area e : %0.2f",area);
 	
 	
	return 0;
}


