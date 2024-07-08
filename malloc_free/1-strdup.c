#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	int len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	ar = malloc(sizeof(str) * (len + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ar[i] = str[i];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
