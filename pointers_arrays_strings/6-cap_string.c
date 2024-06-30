#include "main.h"
/**
 * cap_string - nom fonction
 *
 * Write a function that capitalizes all words of a string.
 * Separators of words:
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * @s: chaine de cara a modifier
 * Return: la chaine de caractere
 */

char *cap_string(char *s)
{
	int n;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	for (n = 1; s[n] != '\0'; n++)
	{
		if ((s[n - 1] == ' ' || s[n - 1] == '\n' ||
			s[n - 1] == ',' || s[n - 1] == ';' ||
			s[n - 1] == '.' || s[n - 1] == '!' ||
			s[n - 1] == '?' || s[n - 1] == '"' ||
			s[n - 1] == '(' || s[n - 1] == ')' ||
			s[n - 1] == '{' || s[n - 1] == '}' ||
			s[n - 1] == '\t') && (s[n] >= 'a' && s[n] <= 'z'))
		{
			s[n] -= 32;
		}
	}
	return (s);
}
