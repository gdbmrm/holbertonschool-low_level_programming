#include "main.h"
/**
 * _puts_recursion - nom de la fonction
 *
 * Write a function that prints a string, followed by a new line.
 *
 * @s: chaine de cara a imprimer
 *
 * Return: chaine de cara
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

