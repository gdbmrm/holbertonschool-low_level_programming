#include <stdio.h>
/**
 * multiples - Print numbers from 1 to 100 with special rules.
 *
 * Description:
 * This function prints the numbers from 1 to 100.
 * For multiples of three, it prints "Fizz" instead of the number,
 * and for multiples of five, it prints "Buzz".
 * For numbers that are multiples of both three and five, it prints "FizzBuzz".
 * All other numbers are printed as themselves.
 *
 * The function uses a loop to iterate through the numbers from 1 to 100.
 * Depending on the value of the current number,
 * it applies the appropriate rule
 * and prints the result followed by a space.
 *
 * Example Output:
 * 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11
 * Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz ...
 */

void multiples(void)
{
	int a;

	for (a = 1; a > 0 && a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");

		} else if (a % 3 == 0)
		{
			printf("Fizz");
		} else if (a % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", a);
		}
	printf(" ");

	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Description:
 * The main function serves as the entry point of the program.
 * It calls the
 * `multiples` function, which prints the numbers from 1 to 100
 * with special rules:
 * - For multiples of three, it prints "Fizz" instead of the number.
 * - For multiples of five, it prints "Buzz" instead of the number.
 * - For numbers that are multiples of both three and five,
 *   it prints "FizzBuzz".
 * - All other numbers are printed as themselves.
 *
 * After calling the `multiples` function,
 * the main function returns 0 to indicate
 * successful completion of the program.
 *
 * Return: Always 0.
 */

int main(void)
{
	multiples();
	return (0);
}
