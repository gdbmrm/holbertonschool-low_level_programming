#include <stdio.h>
#include <stdlib.h>
/**
 * main - fonction
 *
 * Write a program that multiplies two numbers.
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result of the multiplication
 * can be stored in an integer
 * If the program does not receive two arguments,
 *  your program should print Error, followed by a new line, and return 1
 *
 *  @argc: nombre d'arguments
 *  @argv: arguments
 *
 *  Return: multiplication des deux arguments
 */
int main(int argc, char *argv[])
{
	int resultat = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	resultat = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", resultat);
	return (0);
}
