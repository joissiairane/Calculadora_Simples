
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	
	//declarando variáveis//
	float valori,mes1,mes2 ,valorf;
	//EXECUTANDO CALCULO
	
valori=500.00;
mes1=valori*1/100+valori;
mes2=mes1*1/100+mes1;
valorf=mes2*1/100+mes2;
printf("Valor final é :%f" ,valorf);
    
	return 0;
}
	
