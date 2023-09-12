#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - prototype funtion that frees function types
 *
 * @d: pointer to funtion dog
 **/

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
