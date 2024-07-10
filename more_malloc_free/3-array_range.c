#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int *array_range(int min, int max)
{
	int *ar;
	int i = 0;

	if (min >= max)
	{
		return (NULL);
	}
	ar = malloc((max - min) * sizeof(int));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (;i < max; i++)
	{
		ar[i] = min;
		min++;

	}
	return (ar);

}
