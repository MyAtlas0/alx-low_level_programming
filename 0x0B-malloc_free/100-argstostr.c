#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - prototype variable of type char to concatinate arguments
 *
 * condition - calculates total length and allocates memories to strings
 *
 * @ac: variable representing length of arguments
 *
 * @av: variable representing array of strings
 *
 * Return: returns the pointer to the concatinated strings
 */

char *argstostr(int ac, char **av)
{
	int i, n;
	int length = 0;
	char *result, *len_index;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			length++;
		}
		length++;
	}

	result = (char *)malloc(sizeof(char) * length + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	len_index = result;
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			*result = av[i][n];
			result++;
		}
		*result = '\n';
		result++;
	}
	*result = '\0';
	return (len_index);
}
