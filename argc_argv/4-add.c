#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - nom fonction
 *
 * verifie si le caractere est un nombre
 * @str: charactere
 * Return: 1 ou 0
 */
int is_number(const char *str)
{
	if (*str == '\0')
	{
	return (0);
	}

	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}

	return (1);
}
/**
 *  main - nom fonction
 *
 * Write a program that adds positive numbers.
 * @argc: nombre darguments
 * @argv: arguments
 * Return: la somme des arguement si ce sont des chiffres
 */
int main(int argc, char *argv[])
{
	int i, somme = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != '\0' && is_number(argv[i]))
		{
			somme = somme + atoi(argv[i]);
		} else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", somme);
	return (0);
}
