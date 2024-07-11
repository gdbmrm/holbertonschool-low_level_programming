#ifndef DOG_H
#define DOG_H
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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
