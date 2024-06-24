#include "main.h"
/**
 * more_numbers - fonction qui affiche les nbs de 0 a 14
 *
 * Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */


void more_numbers(void)
{
	int a, c;

	for (a = 0; a <= 9; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar('0' + (c / 10));
			}
			_putchar('0' + (c % 10));
		}
	_putchar('\n');
	}
}

