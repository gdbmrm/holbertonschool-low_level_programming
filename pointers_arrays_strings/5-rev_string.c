#include "main.h"
/**
 * rev_string - fonction qui reverse un string
 *
 * @s: charactere a reverse
 *
 * Write a function that reverses a string.
 */

void rev_string(char *s)
{

	int len = 0;
	int debut = 0;
	int fin;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	fin = len - 1;

	while (debut < fin)
	{
		temp = s[debut];
		s[debut] = s[fin];
		s[fin] = temp;
		debut++;
		fin--;

	}
}
