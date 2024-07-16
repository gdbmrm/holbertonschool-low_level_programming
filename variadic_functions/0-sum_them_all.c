#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, somme;
	double valeur;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		valeur = va_arg(args, double);
		somme += valeur;
	}
	va_end(args);
	return(somme);

}
