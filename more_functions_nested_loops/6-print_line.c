#include "main.h"
/**
 * print_line - fonction qui crÃe des ligns avec @n tirets
 *
 * Write a function that draws a straight line in the terminal.
 *
 * @n: nombre de tirets
 */

void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (a != n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
