#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");
//	declarando vari�veis
float	base,altura, resultado;
//executando comandos
printf("Base � :");
scanf    ("%f",&base);
printf        ("Altura � :");
scanf            ("%f",&altura);
resultado=altura*base/2;
printf("�rea �:%3.2f",resultado);


	return 0;
}
