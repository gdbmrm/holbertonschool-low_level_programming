#include "main.h"
/**
 * puts_half - print la seconde moitié de la chaine de charactere
 *
 * Write a function that prints half of a string, followed by a new line
 * If the number of characters is odd,
 *  the function should print the last n characters of the string,
 *   where n = (length_of_the_string - 1) / 2
 *
 * @str: chaine de charactere
 */

void puts_half(char *str)
{
	int len = 0;
	int moitie;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		moitie = (len / 2) + 1;
	} else
	{
		moitie = len / 2;
	}

	for (; moitie < len; moitie++)
	{
		_putchar(str[moitie]);
	}
	_putchar('\n');
}