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
	unsigned long int lens1 = 0, lens2 = 0;
	int n = lens1 + lens2;

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
	ar = malloc( n * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < lens2; j++, i++)
	{
		ar[i] = s2[j];
	}
	ar[i] = '\0';
	return (ar);
}
