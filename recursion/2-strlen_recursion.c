#include "main.h"
/**
 * _strlen_recursion - nom de la fonction
 *
 * Write a function that returns the length of a string.
 *
 * @s: string dont on retourne la longueur
 *
 * Return: longeur de s
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
