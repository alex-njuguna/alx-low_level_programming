#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog -init a variable of type struct dog
 * @d: structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = strdup(name);
d->age = age;
d->owner = strdup(owner);
}
