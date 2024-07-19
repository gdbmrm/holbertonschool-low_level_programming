#include "function_pointers.h"
/**
* int_index - nom fonction
*
* Write a function that searches for an integer.
*
* @array: tableau d'entier
* @size: taille du tableau
* @cmp: compare si l'élément est 98, s'il est strict pos
* et si c'est la valeur absolue de 98
*
* Return: indice de l'élément
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
