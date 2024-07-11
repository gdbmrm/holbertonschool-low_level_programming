#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialise un chien
 * @d: nom structure
 * @name: nom chien
 * @age: age
 * @owner: proprio
 *
 * Description: Write a function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
