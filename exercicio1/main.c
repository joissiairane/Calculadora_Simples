#include <stdio.h>
#include <stdlib.h>



 char nome[10];
 char sobrenome[10];

	/* escreva sobrenome, nome*/
main()
{
		

	printf ("Digite seu nome: ");
	scanf ("%s",&nome);
	printf ("Digite seu sobrenome: ");
	scanf("%s",&sobrenome);
	printf ("%s,%s",sobrenome,nome);
	return 0;
}
