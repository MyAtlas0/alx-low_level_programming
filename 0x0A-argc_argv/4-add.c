#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main -main function of prototype that adds 2 numbers
 *
 * condition - checks if each argument is a digit, if not print Error
 *
 * @argc: variable for argunebts in the program
 *
 * @argv: variable for arrays storing arguments of a program
 *
 * Return: returns 0 if succesful else return 1
 */

int main(int argc, char *argv[])
{
	int i, n;
	int result = 0;

	if (argc < 2)
	{
		printf("%d\n", result);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n]; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
