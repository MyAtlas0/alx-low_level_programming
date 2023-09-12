#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - prtotype funtion that defines funtion types and its declarations
 *
 * @d: pointer to funtion struct dog
 *
 * @name:  variable representing dogs name
 *
 * @owner: variable representing dogs owner
 *
 * @age: variable representing dogs age
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
