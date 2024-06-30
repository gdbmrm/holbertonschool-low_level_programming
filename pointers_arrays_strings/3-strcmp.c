#include "main.h"
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
	int i, j;
	int sup1 = 0, sup2 = 0;
	int resultat = 15;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				sup1++;
				sup2++;
			} else if (s1[i] < s2[j])
			{
				sup2++;
			} else if (s1[i] > s2[j])
			{
				sup1++;
			}
		}
	}
		if (sup1 == sup2)
		{
			resultat = 0;
		} else if (sup1 > sup2)
		{
			resultat = -resultat;
		}
	return (resultat);
}
