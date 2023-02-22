#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	setlocale(LC_ALL,"Portuguese");
 	//declarando variáveis
	 int nascim,idade;
	 //executando comandos
	 printf("Qual ano de nascimento: ");
                          scanf("%d",&nascim);
                          idade=2050-nascim;
                          printf("A idade será: %d anos" ,idade);

	return 0;
}
