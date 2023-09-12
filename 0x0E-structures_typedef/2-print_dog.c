#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prtotype funtion that defines funtion types and its declarations
 *
 * @d: pointer to funtion struct dog
 **/

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
