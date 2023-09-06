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
	int i, n, k = 0;
	size_t length = 0;
	char *result;

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			length++;
		}
		length++;
	}
	result = malloc(sizeof(char) * length + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			result[k] = av[i][n];
			k++;
		}
		result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
