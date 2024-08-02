#include "main.h"
/**
* set_bit - fonction
* Write a function that sets the value of a bit to 1 at a given index.
* @n: nb a modifier
* @index: nb ou l'on doit inserer 1
* Return: 1 si succès, -1 sinon
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int p;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	for (p = 1; index > 0; index--, p *= 2)
		;

	*n += p;
	return (1);
}
