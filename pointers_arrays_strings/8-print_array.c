#include "main.h"
#include <stdio.h>
/**
 * print_array - print n element du array
 *
 * Write a function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: array a afficher
 * @n: nombre d'elements a afficher
 */

void print_array(int *a, int n)
{
	int x;

	while (x <= n)
	{
		if (x != n)
		{
			printf("%d, ", a[x]);
		} else
		{
			printf("%d", a[x]);
		}
		x++;
	}

	printf("\n");





}
