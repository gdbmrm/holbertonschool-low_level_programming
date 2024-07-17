#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - nom fonction variadique
 *
 * Write a function that returns the sum of all its parameters.
 *
 * @n: nombre de nombre a additionner
 * Return: somme des arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int somme = 0;
	va_list args;

	va_start(args, n);

	if (n <= 0)
	{
		va_end(args);
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		somme += va_arg(args, int);
	}
	va_end(args);
	return (somme);

}
