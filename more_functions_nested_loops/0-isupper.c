#include "main.h"
/**
 * _isupper - checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Description: This function checks if the given character is an uppercase
 * letter (from 'A' to 'Z'). It prints '1' if the character is uppercase,
 * and '0' otherwise.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */


int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
