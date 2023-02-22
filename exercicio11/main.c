#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//declarando variáveis
	setlocale(LC_ALL,"Portuguese");
	float cm,ml,dec,mt   ;
	//executando comandos
	printf("Quantos centimetros : ");
	scanf("%f",&cm);
	mt=cm/100;
	ml=cm*10;
	dec=cm/10;
	
	printf("\n Valor de cm em metros:%.2f metros",mt);
	printf("\n Valor de cm em milimeros:%.2f milimetros",ml);
	printf("\n Valor de cm em decimetro:%.2f decimetros",dec);
	return 0;
}
