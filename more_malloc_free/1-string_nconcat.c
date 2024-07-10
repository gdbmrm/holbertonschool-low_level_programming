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
	unsigned int i = 0, j = 0;
	unsigned int lens1 = 0, lens2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[lens2] != '\0')/** longueur de s2*/
	{
		lens2++;
	}
	while (s1[lens1] != '\0')/** longueur de s1*/
	{
		lens1++;
	}
	ar = malloc((lens1 + lens2 + 1) * sizeof(char));/**allocation dynamique des 2len + '\0'*/
	if (ar == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0') /**pour copier s1 dans ar*/
	{
		ar[i] = s1[i];
		i++;
	}
	if (n >= lens2)
	{
		while (s2[j] != '\0')
		{
			ar[i] = s2[j];
			j++;
			i++;
		}
	}
	while (j < n && s2[j] != '\0') /**copie a la suite s2 dans ar*/
	{
		ar[i] = s2[j];
		j++;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
