#include "main.h"
/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 *
 * Description:
 * This function prints the numbers 0 through 9, each on a new line, using
 * the putchar function. After printing all numbers, it prints a final newline
 * character to move to the next line.
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48 + a);
	}
	_putchar('\n');
}
