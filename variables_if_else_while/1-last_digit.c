#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'This program will assign a random number to the variable n
 *  each time it is executed. Complete the source code
 *  in order to print the last digit of the number stored in the variable n.'
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n"
			, n, last_digit);
	} else if ((n < 0) || ((last_digit > 0) & (last_digit < 6)))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, last_digit);
	}
return (0);
}
