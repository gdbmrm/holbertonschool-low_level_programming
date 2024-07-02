#include "main.h"
#include <stddef.h>
/**
 * _strstr - nom fonction
 *
 * Write a function that locates a substring.
 * Fonction qui cherche une aiguille dans une botte de foin
 *
 * @haystack: botte de foin
 * @needle: aiguille
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		if (*haystack == needle[0] && *(haystack + 1) == needle[1])
		{
			for (i = 0; needle[i]; i++)
			{
				if (haystack[i] != needle[i])
				{
					break;
				}
				if (needle[i + 1])
				{
					return (haystack);
				}
			}
		}
		haystack++;
	}
	return ('\0');
}
