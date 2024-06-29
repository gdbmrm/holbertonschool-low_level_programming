#include "main.h"
/**
 * puts2 - print every other characteres
 *
 * Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: chaine de caractere dont on va afficher tout les deuxx characteres
 */

void puts2(char *str)
{
	for (; *str; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
