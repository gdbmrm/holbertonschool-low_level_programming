#include "main.h"
/**
* clear_bit - fonction
* Write a function that sets the value of a bit to 0 at a given index.
* @n: nb a modifier
* @index: index ou l'on doit inserer 0
* Return: 1 si succès, -1 sinon
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
