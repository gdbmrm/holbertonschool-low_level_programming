#include "main.h"
/**
 * _strlen - fonction qui renvoie la longeur d'un string
 *
 * Write a function that returns the length of a string.
 *
 * @s: string d'entr√e
 *
 * Return: longeur du string
 */


int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		len++;
	}
	return (len);
}
