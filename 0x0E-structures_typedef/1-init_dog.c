#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable
 * @d: pointer to struct
 * @name: name to initializa
 * @age: age to init
 * @owner: owner to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
