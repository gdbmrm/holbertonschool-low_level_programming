#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	static char dest = src;
	return (dest);
}
