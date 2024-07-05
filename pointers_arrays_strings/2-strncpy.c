#include "main.h"
/**
 * _strncpy - fonction qui reproduit la commande strncpy
 *
 * Copie n caractere de src dans dest
 *
 *
 * @dest: Pointeur vers la chaîne de destinatio
 * où les caractères seront cier
 *
 * @src : Pointeur vers la chaîne sourc
 * a partir de laquelle les caractères seront cpier
 *
 * @n: nombre de caractere a copier
 *
 * Return: pointeur vers dest
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *start_dest = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (start_dest);
}
