#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * init_dog - initializes a variable
 * @d: the variable
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name != NULL)
	{
		strcpy(d->name, name);
	}
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner != NULL)
	{
		strcpy(d->owner, owner);
	}
}
