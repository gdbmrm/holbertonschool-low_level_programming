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
	char *start_dest = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n; ++i)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start_dest);

}
