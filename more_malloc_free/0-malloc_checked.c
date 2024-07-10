#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - nom fonction
 *
 * Write a function that allocates memory using malloc.
 *
 * @b: param√tres
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
