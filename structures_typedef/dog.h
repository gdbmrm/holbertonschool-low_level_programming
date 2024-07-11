#ifndef(dog.h)
#define(dog.h)
#include <stdio.h>
/**
 * struct dog - creation d'un chien
 * @name: nom du chien
 * @age: age du chien
 * @owner: nom de son proprio
 *
 * Description: Define a new type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
