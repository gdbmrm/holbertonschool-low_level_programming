#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'This program will assign a random
 * number to the variable n each time it is executed
 *  Complete the source code in order to print
 *  whether the number stored in the variable n is positive or negative.
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%s\n is positive")
	else
		if (n < 0)
		printf("%s\n is negative")
		else
		printf("%s\n is zero")
	}
	return (0);
}
