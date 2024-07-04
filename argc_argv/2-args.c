#include <stdio.h>
/**
 * main - nom fonction
 *
 * Write a program that prints all arguments it receives.
 *
 * @argc: nombre argument
 * @argv: arguments
 *
 * Return: affiche les arguments
 */
int main(int argc, char *argv[])
{
	char **arg = argv;

	while (argc--)
	{
		printf("%s", *arg++);
		printf("\n");
	}
	return (0);
}
