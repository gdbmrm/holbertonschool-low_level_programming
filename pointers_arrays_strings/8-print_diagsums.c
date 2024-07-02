#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int somme = 0;

	for (i = 0; i < size; i++)
	{
		somme = somme + a[i][i];
	}
	printf("%d", somme);
	printf("\n");
}
