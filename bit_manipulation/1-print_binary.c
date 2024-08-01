#include "main.h"
/**
* print_binary - fonction
* Write a function that prints the binary representation of a number.
* @n: nombre decimal que l'on doit convertir en binaire
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
