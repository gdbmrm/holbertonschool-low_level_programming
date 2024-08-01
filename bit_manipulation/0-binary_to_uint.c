#include "main.h"
/**
* binary_to_uint - fonction
* Write a function that converts a binary number
*  to an unsigned int.
* @b: nombre binaire a convertir
* Return: resultat de la conversion de b
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		dec = (dec << 1) + (b[i] - '0');
	}
	return (dec);
}
