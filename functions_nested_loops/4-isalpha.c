#include "main.h"
/**
 * _isalpha - Checks for an alphabetic character.
 * @c: The character to check.
 *
 * Description: This function takes a single character as an input
 * and checks if it is an alphabetic letter (lowercase or uppercase).
 *
 * Return: 1 if the character is an alphabetic letter, 0 otherwise.
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);

}
