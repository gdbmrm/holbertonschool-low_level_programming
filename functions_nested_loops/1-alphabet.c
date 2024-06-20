#include "main.h"
/**
 * print_alphabet - Prints the alphabet followed by a newline.
 *
 * This function iterates over the alphabet characters and prints each
 * character using the _putchar function, followed by a newline character.
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
