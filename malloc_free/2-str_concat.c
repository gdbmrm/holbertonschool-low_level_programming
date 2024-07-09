#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - fonction qui imite strcat
 *
 * Write a function that concatenates two strings.
 *
 * @s1: 1 ere chaine a concatener
 * @s2: 2eme chaine a concatener
 *
 * Return: pointeur vers un tableau avec les deux chaines concat
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned long int i = 0, j = 0;

	ar = malloc(sizeof(s1) + sizeof(s2));

	if (ar == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}
	for (j = 0; s2[j] != '\0' && j <= sizeof(s2); j++, i++)
	{
		ar[i] = s2[j];
	}
	ar[i] = '\0';
	return (ar);
}
