#include "main.h"
/**
 * _strchr - nom de la fonction
 *
 * Write a function that locates a character in a string.
 *
 * @s: string
 * @c: character a locates
 *
 * Return: Returns a pointer to the first occurrence
 *  of the character c in the string s,
 * or NULL if the character is not found
 */



char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

	}
	if (c == '\0')
	{
		return (s + i);
	}
	return ('\0');
}
