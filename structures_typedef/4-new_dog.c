#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - fonction qui copie la strdup
 *
 * Function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: tableau a recopier
 *
 * Return: nouveau tableau identique a str
 */
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
/**
* new_dog - crée un nouveau chien
*Write a function that creates a new dog.
* @name: nom du chien
* @age: age du chien
* @owner: nom du proprio
* Return: le nouveau chien
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *will;
	int len_name, len_owner;

	will = malloc(sizeof(dog_t));
	if (will == NULL)
	{
		return (NULL);
	}

	will->name = name;
	will->age = age;
	will->owner = owner;

	for (len_name = 0; name[len_name] != '\0'; len_name++)
	{
	}

	for (len_owner = 0; owner[len_owner] != '\0'; len_owner++)
	{
	}
	will->name = malloc(len_name + 1);
	will->owner = malloc(len_owner + 1);

	if (will->name == NULL || will->owner == NULL)
	{
		free(will);
	}
	will->name = _strdup(name);
	will->owner = _strdup(owner);
	return (will);
}
