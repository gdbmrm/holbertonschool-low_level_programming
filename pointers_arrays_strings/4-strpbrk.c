#include "main.h"
/**
 * _strpbrk - nom de la fonction
 *
 * Write a function that searches a string for any of a set of bytes.
 *
 * @s: chaine de cara
 * @accept: string a chercher dans s
 *
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}

		}
	}
	return (0);
}
