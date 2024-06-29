#include "main.h"
/**
 * _strncat - nom de la fonction
 *
 * Write a function that concatenates two strings.
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: 1er para
 * @src: 2eme para
 * @n: nb d'element de src a concatener
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
