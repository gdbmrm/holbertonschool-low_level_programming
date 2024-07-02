#include "main.h"
#include <stddef.h>
/**
 * _memset - nom fonction
 *
 * Write a function that fills memory with a constant byte.
 *
 * @s: chaine de caractere
 * @b: valeur de remplacement
 * @n: nombre de bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
