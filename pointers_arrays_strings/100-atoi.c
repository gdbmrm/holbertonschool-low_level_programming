#include "main.h"
#include <stdio.h>
int _atoi(char *s)
{
	int i = 0;
	long int entier;
	char sign = '+';

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		{
			sign = '-';
		}
		if ('0' <= s[i] && s[i] <= '9')
		{
			entier = entier + (s[i] - '0');
		} else 
		{
			return (entier);
		}	
	}
	return (entier + sign);
}
