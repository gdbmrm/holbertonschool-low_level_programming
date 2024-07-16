#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - nom fonction variadique
 *
 * Write a function that prints numbers, followed by a new line.
 *
 * @separator: sÃparateur de nombre
 * @n: nombre de nombre
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		char *str = va_arg(args, char *);
		if (str  == NULL)
                {
                        printf("(nil)");
			break;
                }

		if (i == n - 1)
		{
			printf("%s", va_arg(args, char *));
			break;
		}
		if (separator == NULL)
		{
			printf("%s", str);
		} else
		{
			printf("%s", str);
			printf("%s", separator);
		}
	}
	printf("\n");
}
