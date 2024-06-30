#include "main.h"
/**
 * leet - nom fonction
 *
 * Write a function that encodes a string into 1337.
 *
 * @c: chaine de caractere a modifier
 *
 * Return: chaine de caractere modifi√
 */
char *leet(char *c)
{
	int i, j;
	char *lettre = "aAeEoOtTlL";
	char *nombre = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; lettre[j] != '\0'; j++)
		{
			if (c[i] == lettre[j])
			{
				c[i] = nombre[j];
			}
		}
	}
	return (c);
}
