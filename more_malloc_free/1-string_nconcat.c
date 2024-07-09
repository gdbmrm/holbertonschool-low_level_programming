#include "main.h"
#include <stdlib.h>
#include <stdio.h>
{
	char *ar;
	unsigned int i, j;
	unsigned int len_s2 = 0;

	ar = malloc(sizeof(s1) + sizeof(s2) + 1);

	if (ar == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}
	printf("%s\n",ar);
	while (*s2)
	{
		len_s2++;
		s2++;
	}
	while (s2[j] != '\0')
	{
		ar[i] = s2[j];
		j++;
		i++;
	}
	*ar = '\0';
	printf("%s\n", ar);
	return (ar);
}
