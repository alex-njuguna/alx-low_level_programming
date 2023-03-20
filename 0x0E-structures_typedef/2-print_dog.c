#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dog {
    char *name;
    char *breed;
    int age;
};

/**
 * print_dog - print struct dog
 * d: par
 */
void print_dog(struct dog *d)
{
if (d == NULL) {
return (1);
}

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
printf("Age: %d\n", d->age);
}
