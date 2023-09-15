#include "3-calc.h"
#include <stdio.h>
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
	int num_1, num_2, calc;
	char str;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	str = argv[2][0];
	if (str != '+' && str != '-' && str != '*' && str != '/' && str != '%')
	{
		printf("Error\n");
		exit(100);
	}
	calc = (get_op_func(argv[2]))(num_1, num_2);

	printf("%d\n", calc);
	return (0);
}
