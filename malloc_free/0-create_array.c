#include "main.h"
#include <stdlib.h>
/**
 * create_array - crÃe un tableau et initialise toutes les valeurs a c
 *
 * Write a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: taille du tableau
 * @c: charactere a initialiser
 *
 * Return: pointeur du tableau
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
