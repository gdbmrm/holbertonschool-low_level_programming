#include "main.h"
/**
 * print_square - fonction qui affiche un carré avec des #
 *
 * Write a function that prints a square, followed by a new line.
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 *
 * @size: taille du carré
 */

void print_square(int size)
{
	int num1, num2;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (num1 = 0; num1 <= size; num1++)
		{
			for (num2 = 0; num2 <= size; num2++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
