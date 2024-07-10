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
	int lens1 = 0, lens2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}	
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lens1] != '\0')
        {
                lens1++;
        }
	while (s2[lens2] != '\0')
        {
                lens2++;
        }
	ar = malloc(( lens2 + lens1 + 1) * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		ar[i] = s2[j];
	}
	ar[i] = '\0';
	return (ar);
}
