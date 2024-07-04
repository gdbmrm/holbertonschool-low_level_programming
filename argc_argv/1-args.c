#include <stdio.h>
/**
 * main - nom fonction
 *
 * Write a program that prints the number of arguments passed into it.
 * Your program should print a number, followed by a new line
 *
 * @argc: nb d'arguments
 * @argv: argument
 *
 * Return: nombre d'arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int len = -1, i;

	for (i = 0; i < argc; i++)
	{
		len++;
	}
	printf("%d", len);
	printf("\n");
	return (0);
}
