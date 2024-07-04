#include "main.h"

int newton(double n, int prec)
{
	double x = n / 4;
	int i;

	if (n <= 0)
	{
		return (0);
	}
	for (i = 0; i < prec; i++)
	{
		x = (x + (n / x)) / 2;
	}
	return x;

}
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	double result = newton((double)n, precision);
	return (_sqrt_recursion(n - 1));
}
