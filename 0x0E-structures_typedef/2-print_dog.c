#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints variable
 * @d: the varible
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL)
	{
		printf("nil");
	}
	else if (d->age == 0)
	{
		printf("nil");
	}
	else if (d->owner == NULL)
	{
		printf("nil");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
