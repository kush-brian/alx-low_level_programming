#include "dog.h"
#include <stdlib.h>
#include <strings.h>
/**
 * init_dog - initializes a variable
 * @d: the variable
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
