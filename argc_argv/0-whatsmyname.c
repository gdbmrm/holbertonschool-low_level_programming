#include <stdio.h>
/**
 * main - fonction main
 *
 * Write a program that prints its name, followed by a new line.
 * If you rename the program,
 * it will print the new name, without having to compile it again
 * You should not remove the path before the name of the program
 *
 * @argc: nombre d'arguement
 * @argv: argument vector
 *
 * Return: entier
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
