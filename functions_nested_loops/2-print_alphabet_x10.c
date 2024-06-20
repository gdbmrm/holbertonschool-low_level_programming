#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet followed by a newline.
 *
 * This function iterates over the alphabet characters and prints each
 * character using the _putchar function, followed by a newline character.
 * 10 times
 */

void print_alphabet_x10(void)
{
	int n = 0;

	for (n = 0; n <= 10; n++)
	{
		print_alphabet();
	}
        _putchar('\n');
}
