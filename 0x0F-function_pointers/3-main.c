#include "3-calc.h"
#include <stdlib.h>

/**
 * main - function for entry point of the calculator program
 *
 * @argc: the number of command_line arguments
 *
 * @argv: an array of strings containing  the command-line arguments
 *
 * Return: always returns 0 on successful execution
 */

int main(int argc, char *argv[])
{
	int num_1 = 0, num_2 = 0, result = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	result = (get_op_func(argv[2]))(num_1, num_2);

	printf("%d\n", result);
	return (0);
}
