#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creer un tableau 2D initialiser a 0
 *
 * Write a function that returns a pointer to a 2D array of integers.
 *
 * @width: largeur tableau / colonne
 * @height: hauteur / ligne
 *
 * Return: tableau 2D
 */
int **alloc_grid(int width, int height)
{
	 int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		ar[i] = malloc(width * sizeof(int));
/** alloue dynamiquement chaque colonne*/
		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ar[j]);
			}
			free(ar);
/** libere tout le tableau si pas de place pour les colonnes */
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
