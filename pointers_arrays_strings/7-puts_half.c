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
	int len;
	int moitie;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 != 0)
	{
		len--;
	}
	for (moitie = len / 2; moitie < len; moitie++)
	{
		_putchar(str[moitie]);
	}
	_putchar('\n');
}
