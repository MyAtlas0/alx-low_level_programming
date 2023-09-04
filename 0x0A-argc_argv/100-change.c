#include "main.h"

/**
 * main - main function of prototype int
 *
 * condition - prints Error if argument != 2, then prints minimum from 25 - 1
 *
 * @argc: variable for arguments in the progra`m
 *
 * @argv: variable of the array storing the arguments
 *
 * Return: returns 1 if argument not 1, else returns 0
 */

int main(int argc, char *argv[])
{
	int coin = 0;
	int cent = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cent < 0)
	{
		printf("%d\n", 0);
	}

	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent = cent - 25;
		}
		else if (cent >= 10)
		{
			cent = cent - 10;
		}
		else if (cent >= 5)
		{
			cent = cent - 5;
		}
		else if (cent >= 2)
		{
			cent = cent - 2;
		}
		else if (cent >= 1)
		{
			cent = cent - 1;
		}
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
