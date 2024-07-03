#include "main.h"
/**
 * _print_rev_recursion - nom de la fonction
 *
 * Write a function that prints a string in reverse.
 *
 * @s: string a inverser
 */
void _print_rev_recursion(char *s)
{
	if (*s <= 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
