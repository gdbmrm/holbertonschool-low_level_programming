#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
	}
	if (n < 98)
	{
		for (i = 0; i <= (98 - n); i++)
		{
			if (i == 98)
			{
				printf("%d", n + i); 
			} else
			{
				printf("%d, ", n + i);
			}
		}
	} else if (n > 98)
	{
		for (i = 0; i <= (n - 98); i++)
		{
			 if (i == 98)
                        {
                                printf("%d", n - i);
                        } else
			{
				printf("%d, ", n - i);
			}
		}
	}
	printf("\n");
}
