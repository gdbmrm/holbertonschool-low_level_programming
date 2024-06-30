#include "main.h"
#include <stdio.h>
/**
 * _strcmp - fonction qui imite la commande du meme nom
 *
 * Write a function that compares two strings.
 *
 * @s1 : premier charactere a comparer
 * @s2: deuxieme charactere a comparer
 *
 * Return: entier negatif ou positif
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int resultat = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			resultat = s1[i] - s2[i];
			break;
		}
	}
	return (resultat);
}
