#include "main.h"
/**
 * Write a function that prints the alphabet,
 *  in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	while (x < 26)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
