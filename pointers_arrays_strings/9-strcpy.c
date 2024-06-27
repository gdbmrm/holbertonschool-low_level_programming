#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - fonction qui copie le string d'un pointeur
 *
 * Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: string copi√
 * @src: string a recopier
 *
 * Return: string copi√
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
