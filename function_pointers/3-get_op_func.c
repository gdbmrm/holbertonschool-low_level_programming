#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
* get_op_func - fonction
* Write a program that performs simple operations.
* @s: operateur
* Return: pointeur vers la fonction qui réalisera l'operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while(*ops[i].op != '\0')
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
