#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//declarando variaveis
	float base, altura, area;
	setlocale(LC_ALL,"Portuguese");
	//coletando dados
	printf ("A base é :");
        scanf("%f",&base);
    printf("A altura é :");
        scanf ("%f",&altura);
        //executando comando

    area=base*altura;

       printf ("A área é :%f" ,area);
	return 0;
}
