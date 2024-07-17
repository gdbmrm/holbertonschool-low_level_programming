#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - nom fonction variadique
 *
 * Write a function that prints strings, followed by a new line.
 *
 * @separator: sÃparateur de charactere
 * @n: nombre de charactere
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

		if (str == NULL) /** si la chaine est nulle*/
		{
			printf("(nil)");
		} else
		{
			printf("%s", str);
		}
		if (separator == NULL) /** si le separateur est nulle*/
		{

		} else if (i < n - 1) /** si c'est le dernier chara*/
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
