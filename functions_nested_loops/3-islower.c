#include "main.h"
/**
 * _islower - Checks for a lowercase character.
 * @c: The character to check.
 *
 * Description: This function takes a single character as an input
 * and checks if it is a lowercase letter.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}
