#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *start_dest = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (start_dest);
}
