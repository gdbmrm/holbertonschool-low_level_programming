#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: nombre d'args
 * @argv: liste des arguments
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int calcul;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
	strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	calcul = get_op_func(argv[2])(num1, num2);
	printf("%d\n", calcul);
	return (0);
}
