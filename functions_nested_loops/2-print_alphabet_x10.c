#include "main.h"
/**
 *print_alphabet - Prints the alphabet followed by a newline.
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

/**
 * print_alphabet_x10 - Prints the alphabet followed by a newline.
 *
 * This function iterates over the alphabet characters and prints each
 * character using the _putchar function, followed by a newline character.
 * 10 times
 *
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		print_alphabet();
	}
}
