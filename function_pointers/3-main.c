#include "3-calc.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	int a = 14, b = 4;
	char *operator = "%";
	int calcul;


	calcul = get_op_func(operator)(a, b);
	printf("%d\n", calcul);
	return (0);
}