#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
//declarando variáveis
 {
float valorh,horat,bonus=300,dependentes,sl,sb;
//executando comandos

                  printf ("Valor hora e:");
                  scanf ("%f",&valorh);
                  printf("Quantidade de horas trabalhadas:");
                  scanf("%f",&horat);
                  printf("Quantidade de dependentes:");
                  scanf("%f",&dependentes);
                  sl=valorh*horat;
                  printf("Valor salario liquido e:%3.2f",sl);
                  sb=dependentes*bonus+ sl;
                  printf("Valor salario bruto e:%3.2f",sb);

	return 0;
}
