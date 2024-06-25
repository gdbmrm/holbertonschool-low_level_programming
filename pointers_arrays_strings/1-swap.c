#include "main.h"
/**
 * swap_int - fonction qui échange les valeurs de deux pointeurs
 *
 * @a: premier pointeur
 * @b: second pointeur
 *
 * Write a function that swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;


}
