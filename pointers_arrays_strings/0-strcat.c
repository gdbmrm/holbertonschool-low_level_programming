#include "main.h"
/**
 * _strcat - fonction qu concat√®ne deux caract√res
 *
 * Write a function that concatenates two strings
 *
 * @dest: premier string
 * @src: deuxieme string a concatener dans dest
 *
 * Return: pointeur vers dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
