#include "main.h"
/**
 * prime - fonction pour savoir si n est un nombre premier
 *
 * @n: nombre a savoir si premier ou non
 * @i: diviseur de n
 *
 * Return: 1 si n est un nb premier sinon 0
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	} else if (n == 2)
	{
		return (1);
	} else if (n % i == 0)
	{
		return (0);
	} else if (i * i > n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
/**
 * is_prime_number - fonction recursive
 *
 * Write a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 *
 * @n: nombre a savoir si premier ou non
 *
 * Return: 1 si premier sinon 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
