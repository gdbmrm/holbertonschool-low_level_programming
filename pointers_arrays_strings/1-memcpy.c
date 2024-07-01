#include "main.h"
/**
 * _memcpy - nom fonction
 *
 * char *_memcpy(char *dest, char *src, unsigned int n)
 *
 * @dest: chaine de caractere destination
 * @src: chaine de caracteres source
 * @n: nombre de byte a recopier
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
