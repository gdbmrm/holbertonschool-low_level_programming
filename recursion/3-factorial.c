#include "main.h"
/**
 * factorial - nom fonction
 *
 * Write a function that returns the factorial of a given number.
 *
 * @n: nombre
 *
 * Return: factoriel de n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
