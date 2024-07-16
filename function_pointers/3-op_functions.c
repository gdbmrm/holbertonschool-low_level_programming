#include <stdio.h>
#include <stdlib.h>
/**
* op_add - nom fonction
* fonction qui additionne les deux paramètres
* @a: premier parametre
* @b: deuxieme parametre
* Return: somme des deux parametres
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - nom fonction
* fonctio qui soustrait les deux paramètres
* @a: premier parametre
* @b: deuxieme parametre
* Return: soustraction des deux parametres
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - nom fonction
* fonction qui multiplie les deux paramètres
* @a: premier parametre
* @b: deuxieme parametre
* Return: multiplication des deux parametres
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - nom fonction
* fonction qui divise les deux paramètres
* @a: premier parametre
* @b: deuxieme parametre
* Return: division des deux parametres
*/
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - nom fonction
* fonction qui calcule le modulo des deux paramètres
* @a: premier parametre
* @b: deuxieme parametre
* Return: modulo des deux parametres
*/
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
