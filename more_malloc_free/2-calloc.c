#include "main.h"
#include <stdlib.h>
/**
 * _calloc - fonction qui imite calloc
 *
 * Write a function that allocates memory for an array, using malloc.
 *
 * @nmemb: nombre d'elements du tableau
 * @size: taille en bytes des elements du tab
 *
 * Return: tableau de type void allouédynamiquement
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	return (ar);
}
