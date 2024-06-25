#include "main.h"
/**
 * print_rev - affiche la string en ordre inverse
 *
 * Write a function that prints a string, in reverse, followed by a new line.
 *
 * @s: string a afficher dans le sens inverse
 */

void print_rev(char *s)
{

	int len;
	int n;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (n = len - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
