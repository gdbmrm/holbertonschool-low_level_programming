#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - nom fonction
 *
 * Write a function that concatenates two strings.
 *
 * @s1: premiere chaine a concatener
 * @s2: deuxieme chaine a concatener
 * @n: nombre de caractere de s2 a concatener
 *
 * Return: tableau avec les deux chaines
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j;

	ar = malloc(sizeof(s1) + sizeof(s2) + 1);

	if (ar == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0') /**pour copier s1 dans ar*/
	{
		ar[i] = s1[i];
		i++;
	}

	for (j = 0; j < n && s2[j] != '\0'; j++, i++) /**copie a la suite s2 dans ar*/
	{
		ar[i] = s2[j];
	}

	*ar = '\0';
	return (ar);
}
