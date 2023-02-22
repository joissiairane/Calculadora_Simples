#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//declarando variáveis
	float horas,seg,min ;
	printf("digite segundos: ");
	scanf("%f",&seg);
	min=seg/60;
	horas=min/3600;
	printf ("Minutos: %.3f \n",min);
	printf ("Horas: %f ",horas);
	return 0;
}
