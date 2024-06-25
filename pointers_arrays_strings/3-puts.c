#include "main.h"
/**
 * _puts - fonction qui print a string
 *
 * Write a function that prints a string, followed by a new line, to stdout.
 *
 * @str: string a afficher
 */



void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
