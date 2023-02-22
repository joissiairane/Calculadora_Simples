#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define pi 3.14159

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	//declarando variáveis
 	float vol,r,voli;
 	setlocale(LC_ALL,"Portuguese");
 	//entrada de dados
 	printf("Valor do raio é:");
 	scanf("%f",&r);
 	voli=(4.0/3)*pi;
 	vol=voli*pow(r,3);
 	printf("O volume da Esfera é:%f",vol);
	return 0;
}
