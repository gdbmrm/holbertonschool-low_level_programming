#include "main.h"
/**
 * _isdigit - checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Description: This function checks if the given character is a digit
 * (from '0' to '9'). It prints '1' if the character is a digit,
 * and '0' otherwise.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */


int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	} else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
