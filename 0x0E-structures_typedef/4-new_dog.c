#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo = malloc(sizeof(dog_t));

	if (dogo == NULL)
		return (NULL);

	dogo->name = malloc(strlen(name) + 1);
	if (dogo->name == NULL)
	{
		free(dogo);
		return (NULL);
	}
	strcpy(dogo->name, name);

	dogo->owner = malloc(strlen(owner) + 1);
	if (dogo->owner == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	strcpy(dogo->owner, owner);
	dogo->age = age;
	return (dogo);
}
