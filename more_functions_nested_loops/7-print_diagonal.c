#include "main.h"


void print_diagonal(int n)
{
	int a = 0;
	int esp = 0;

        if (n <= 0)
        {
                _putchar('\n');
        } else
        {
                	while (a != n)
                	{
                        	_putchar(' ');
                        	_putchar('\\');
				a++;

                	}
                _putchar('\n');
        }


}
