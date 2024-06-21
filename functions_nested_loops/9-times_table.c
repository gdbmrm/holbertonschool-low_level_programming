#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description:
 * This function prints the multiplication table for numbers from 0 to 9.
 * Each number is separated by a comma and a space. Numbers less than 10
 * are aligned correctly with an additional space if needed. After every
 * 10 numbers, a newline character is printed to move to the next line.
 */

void times_table(void)
{
	int num1 = 0;
	int num2 = 0;
	int multi;

	for (num2  = 0; num2 < 10; num2++)
	{
		for (num1 = 0; num1 < 10; num1++)
		{	multi = num1 * num2;

			if (multi >= 10)
			{
				_putchar('0' + multi / 10);
				_putchar('0' + multi % 10);
					if (num1 < 10)
					{
						_putchar(',');
						_putchar(' ');
					}
			} else
			{	_putchar('0' + multi);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
		}
		}
	_putchar('\n');
	}

}
