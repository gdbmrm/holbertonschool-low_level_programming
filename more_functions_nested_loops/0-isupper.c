#include "main.h"

int _isupper(int c)
{
	int upper = 0;
	int lower = 0;

	if (c <= 'A' && c >= 'Z')
	{
		upper++;
		_putchar('A');
		_putchar(':');
		_putchar(upper);
	
	}
	lower++;
	_putchar('a');
	_putchar(':');
	_putchar(lower);
	
	return (0);

}
