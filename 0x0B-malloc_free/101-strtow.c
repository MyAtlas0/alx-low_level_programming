#include "main.h"
#include <string.h>

/**
 *
 *
 *
 *
 *
 */

int count_words(char *str)
{
	int i;
	int length = 0;
	int in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				in_word = 0;
				length++;
			}
		}
		else
		{
			in_word = 1;
		}
	}
	if (in_word)
	{
		length++;
	}
	return (length);
}

/**
 *
 *
 *
 *
 *
 *
 *
 *
 */

char **strtow(char *str)
{
	int i, n;
	int num_words;
	char *token, *delimiter;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	words = malloc(sizeof(char) * num_words + 1);

	if (words == NULL)
	{
		return (NULL);
	}
	delimiter = " ";
	n = 0;
	token = strtok(str, delimiter);

	while (token != NULL)
	{
		words[n] = malloc(sizeof(char) * (strlen(token) + 1));
		if (words[n] == NULL)
		{
			for (i = 0; i < n; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		strcpy(words[n], token);
		n++;

		token = strtok(NULL, delimiter);
	}
	words[n] = NULL;
	return (words);
}
