#include "main.h"
/**
 * string_toupper - fonction qui passe les lettres en minuscule
 * a des lettres en majuscules
 *
 * Write a function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @n: charactere dont on veut passer les lettres minuscules en majuscules
 *
 * Return: n en majuscule
 */
char *string_toupper(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);

}
