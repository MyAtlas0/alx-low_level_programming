#include "main.h"
#include <string.h>

/**
 * count_words - helper function of type int that counts the words in a string
 *
 * @str: variable representing the string inputs
 *
 * Return: returns the number of words
 */

char **strtow(char *str);

int count_words(char *str)
{
	int i;
	int count = 0;
	int in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	return (count);
}

/**
 * strtow - prototype function on type chat that splits string into words
 *
 * @str: variable representing string input
 *
 * Return: returns a pointer to an array of strings
 */

char **strtow(char *str)
{
	int i, n;
	int word_count;
	char *token;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	word_count = count_words(str);
	if (word_count == 0)
	{
		return (NULL);
	}

	words = (char **)malloc(sizeof(char) * word_count + 1);
	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;
	token = strtok(str, " ");
	while (token != NULL)
	{
		words[i] = strdup(token);
		if (words[i] == NULL)
		{
			for (n = 0; n < i; n++)
			{
				free(words[n]);
			}
			free(words);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");

	}
	words[i] = NULL;
	return (words);
}
