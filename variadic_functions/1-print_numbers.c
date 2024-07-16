#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - nom fonction variadique
 *
 * Write a function that prints numbers, followed by a new line.
 *
 * @separator: s√parateur de nombre
 * @n: nombre de nombre
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n <= 0)
	{
		va_end(args);
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(args, int));
			break;
		}
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int));
		} else
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
	}
	printf("\n");
}

