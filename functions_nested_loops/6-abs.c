#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 *
 * @num: The integer whose absolute value is to be computed.
 *
 * Description:
 * This function takes an integer as input
 * and returns its absolute value.
 * If the input integer is negative,
 * the function returns its positive equivalent.
 * If the input integer is zero or positive,
 * the function returns the input integer itself.
 *
 * Return: The absolute value of the input integer.
 */


int _abs(int num)
{
	if (num < 0)
	{
		num = -num;
	}
	return (num);
}
