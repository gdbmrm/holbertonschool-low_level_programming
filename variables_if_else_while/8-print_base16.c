#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints the alphabet
 * in lowercase, followed by a new line.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *chiffres = "0123456789";
	char *lettres = "abcdef";
	int i = 0;
	int b = 0;

	while (i < 10)
	{	putchar(chiffres[i]);
		i++;
	}
	while (b < 6)
	{	putchar(lettres[b]);
		b++;
	}

	putchar('\n');
	return (0);
}
