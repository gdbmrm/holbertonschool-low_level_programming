#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle[0] == '\0')
	{
		return haystack
	}
	while (*haystack)
	{
		if (*haystack == needle[0] && *(haystack + 1) == needle[1])
		{
			for (i = 0; needle[i]; i++)
			{
				if (haystack[i] != needle[i])
				{

}
