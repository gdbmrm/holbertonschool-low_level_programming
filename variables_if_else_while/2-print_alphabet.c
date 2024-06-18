#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints the alphabet
 * in lowercase, followed by a new line.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{	putchar(str[i]);
		i++;
	}


	putchar('\n');
	return (0);
}
