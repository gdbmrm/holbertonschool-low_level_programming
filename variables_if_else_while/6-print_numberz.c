#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints numbers, followed by a new line.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{	putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
