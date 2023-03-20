#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * dog_t - create a new dog
 * name: dog name
 * age: dog age
 * owner: owner name
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));
if (d == NULL)
{
return NULL;
}

d->name = malloc(strlen(name) + 1);
if (d->name == NULL)
{
free(d);
return NULL;
}

d->owner = malloc(strlen(owner) + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return NULL;
}

strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;
return d;
}
