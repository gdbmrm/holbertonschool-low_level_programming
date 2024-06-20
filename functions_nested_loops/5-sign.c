#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number.
 *
 * @n: The number to check if it's positive, negative, or zero.
 *
 * Description: This function checks the sign of the number n and prints
 * '+' if n is greater than zero,
 * '0' if n is zero, and '-' if n is less than zero.
 *
 * Return: 1 if n is greater than zero,
 *         0 if n is zero,
 *         -1 if n is less than zero.
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);

}
