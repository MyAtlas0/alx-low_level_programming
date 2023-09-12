#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - funtion that defines types types and declarations
 *
 * @name:  variable representing dogs name
 *
 * @owner: variable representing dogs owner
 *
 * @age: variable representing dogs age
 *
 * Return: returns pointer to new_dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_t;

	new_dog_t = malloc(sizeof(dog_t));
	if (new_dog_t == NULL)
	{
		return (NULL);
	}

	new_dog_t->name = strdup(name);
	if (new_dog_t->name == NULL)
	{
		free(new_dog_t);
		return (NULL);
	}

	new_dog_t->age = age;

	new_dog_t->owner = strdup(owner);
	if (new_dog_t->owner == NULL)
	{
		free(new_dog_t);
		return (NULL);
	}
	return (new_dog_t);
}

