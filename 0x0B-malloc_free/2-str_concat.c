#include "main.h"
#include <string.h>

/**
 * str_concat - prototype function of type char to concatinate 2 strings
 *
 * condition - treats NULL as empty, then find string lenght to allocate memory
 *
 * @s1: variable reresenting the first string
 *
 * @s2: variable representing the second string
 *
 * Return: returns the result of concatonating strings
 */

char *str_concat(char *s1, char *s2)
{
	size_t len_1, len_2;
	char *result;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	len_1 = strlen(s1);
	len_2 = strlen(s2);
	result = malloc(sizeof(char) * (len_1 + len_2) + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
