#include "main.h"
/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 *
 * Description:
 * This function prints a right-angled
 *  triangle using the character '#'.
 *
 * - If 'size' is greater than 0,
 *the function prints a triangle of the given size.
 * - If 'size' is 0 or less, the function prints only a new line.
 *
 * The function uses the _putchar function to print each character.
 *
 * Example:
 * print_triangle(3) would print:
 *   #
 *  ##
 * ###
 */

void print_triangle(int size)
{
	int num1, num2, num3;


	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = num1 + 1; num2 < size; num2++)
			{
				_putchar(' ');
			}
	for (num3 = 0; num3 <= num1; num3++)
	{
		_putchar('#');
	}
		_putchar('\n');
		}
	}
}
