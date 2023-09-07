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
	size_t length = 0;
	size_t len_index;
	char *result;

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			length++;
		}
		length++;
	}

	result =(char *)malloc(sizeof(char) * length + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	len_index = 0;
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			result[len_index] = av[i][n];
			len_index++;
		}
		result[len_index++] = '\n';
	}
	result[length] = '\0';
	return (result);
}
