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
	int num_1, num_2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	operator = argv[2];
	num_2 = atoi(argv[3]);

	if (operator[1] != '\0' || (operator[0] != '+' && operator[0] != '-' &&
				operator[0] != '*' && operator[0] != '/' &&
				operator[0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator[0] == '/' || operator[0] == '%') && num_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator)(num_1, num_2);

	printf("%d\n", result);
	return (0);
}
