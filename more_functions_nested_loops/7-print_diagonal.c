#include "main.h"
/**
 * print_diagonal - imprime une diagonale avec des backslash
 *
 * Write a function that draws a diagonal line on the terminal.
 *
 * @n: taille de la diagonale
 */


void print_diagonal(int n)
{
	{
	int num1, num2;


	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (num1 = 0; num1 < n; num1++)
		{
			for (num2 = 0; num2 < num1; num2++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	}
}
