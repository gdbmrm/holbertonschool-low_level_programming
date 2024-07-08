#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fonction qui copie la strdup
 *
 * Function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: tableau a recopier
 *
 * Return: nouveau tableau identique a str
 */
char *_strdup(char *str)
{
	char *ar;
	int i = 0;

	if (sizeof(str) == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(str));

	if (ar == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
	free(ar);
}
