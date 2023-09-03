#include "main.h"

/**
 * main - main function of the program that prints its name
 *
 * condition - checks if any argument available
 *
 * @argc: variable for arguments passed
 *
 * @argv: variable for array of strings that stores  the arguments
 *
 * Return: returns 0, to terminate program
 */

int main(int argc, char *argv[])
{
	int n = 0;

	if (argc > 0)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
