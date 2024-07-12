#include "dog.h"
#include <stdlib.h>
/**
* free_dog - fonction qui libere la memoire des chiens
* Write a function that frees dogs.
* @d: chien a liberer
*/

void free_dog(dog_t *d)
{
    if (d == NULL)
    {
        return;
    }
free(d);

if (d->name == NULL)
{
    return;
}
free(d->name);

if (d->owner == NULL)
{
    return;
}
free(d->owner);
}
