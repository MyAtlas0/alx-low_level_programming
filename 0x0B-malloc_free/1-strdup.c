#include "main.h"
#include <string.h>

/**
 * _strdup - prototype function of type char that copies string str
 *
 * condition - finds if str is NULL, then calculates lenght before allocation
 *
 * @str: variable declared to represent the string of a pointer
 *
 * Return: returns the copy of pointing to str
 */

char *_strdup(char *str)
{
	char *copy;
	size_t lenght;

	if (str == NULL)
	{
		return (NULL);
	}
	lenght = strlen(str);
	copy = malloc(sizeof(char) * lenght + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}
