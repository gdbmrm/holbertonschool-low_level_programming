#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *ar;
	int i = 0;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	ar = malloc((len + 1) * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ar[i] = str[i];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *will;

	will = malloc(sizeof(dog_t));
	if (will == NULL)
	{
		return (NULL);
	}

	will->name = name;
	will->age = age;
	will->owner = owner;

	will->name = _strdup(name);
	will->owner = _strdup(owner);
	return (will);	
}