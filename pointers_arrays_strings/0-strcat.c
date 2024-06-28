#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *result[256];

	for (i = 0; dest[i] != '\0'; i++)
	{
		*result = dest[i];
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		*result =  src[j];
	}
	*result = '\0';
	return (result);
}
