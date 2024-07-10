#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int *array_range(int min, int max)
{
	int *ar;
	int i = 0;
	int r = (max - min) + 1;

	if (min >= max)
	{
		return (NULL);
	}
	ar = malloc(r * sizeof(int));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (;i < r; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);

}
