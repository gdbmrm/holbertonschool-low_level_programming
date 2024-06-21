#include "main.h"
/**
 * print_last_digit - fonction qui imprime le dernier chiffre
 * Description: 'Write a function that prints the last digit of a number.'
 * @num: param√tres
 * Return: le dernier chiffre de num
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (num < 0)
	{
		num = -num;
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
