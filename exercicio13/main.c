#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");
	//declarando vari�veis
	float a,b,c,x1,x2,delta;
	//entrada de dados
printf("digite a : ");
scanf ("%f",&a);
printf("digite b: ");
scanf("%f",&b);
printf("digite c: ");
scanf("%f",&c);
delta= pow(b,2)-4*a*c;
printf("\n O valor delta � :%f",delta);
x1= (-b + sqrt (delta))/(2*a);
x2=(-b - sqrt (delta) )/(2*a);
printf("\n O valor de x1 � :%f" ,x1 );
printf("\n O valor de x2 � :%f" ,x2);	
	
	
	
	return 0;
}
