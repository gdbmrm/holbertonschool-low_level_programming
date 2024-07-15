#include "functions_pointer.h"
#include <stddef.h>
/**
* array_iterator - nom fonction
*
* Write a function that executes a function
* given as a parameter on each element of an array.
*
* @array: tableau
* @size: taille du tableau
* @action: fonction affichage en decimal ou hexadecimal
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
