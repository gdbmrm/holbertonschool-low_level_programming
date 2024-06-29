#include "main.h"
#include <stdio.h>
int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int sign = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
                {
                        sign++;
                }
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + s[i] - '0';
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{		
				break;
			}
		}
	}
	if (sign % 2 != 0)
	{
		result = -result;
	}
	return (result);
}
