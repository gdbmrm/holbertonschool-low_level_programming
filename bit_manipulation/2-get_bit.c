#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: take 'n' as parameter
 * @index: take 'index' as parameter
 * Return: the value of the bit at index 'index' or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
