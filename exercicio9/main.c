#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
int	x,n ,resultado,resfi; 
//
 printf ("x � :");
        scanf ("%d",&x);
printf("n � :");
        scanf("%d",&n);
                     resultado=(x*n);
                     resfi=pow(resultado,2);
                     
                     printf("o resultado �:%d",resfi);
	return 0;
}
