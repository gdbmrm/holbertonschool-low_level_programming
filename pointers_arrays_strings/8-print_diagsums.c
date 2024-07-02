#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - nom de la fonction
 *
 * Write a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a: tableau castéen int*
 * @size: taille du tableau
 *
 * Return: somme des deux diagonales
 */
void print_diagsums(int *a, int size)
{
	int i;
	int somme1 = 0;
	int somme2 = 0;

	for (i = 0; i < size; i++)
	{
		somme1 = somme1 + a[i * size + i];
		somme2 = somme2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d", somme1, somme2);
	printf("\n");
}
