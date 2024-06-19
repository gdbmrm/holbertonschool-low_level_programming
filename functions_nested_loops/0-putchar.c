#include <unistd.h>
#include <stdio.h>
#include "0-putchar.c"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	char *str = "_putchar";
	int len = sizeof(*str);

	while (len >= 0)
	{
		_putchar(*str);
		len--;

	}
	putchar('\n');
	return (0);
}
