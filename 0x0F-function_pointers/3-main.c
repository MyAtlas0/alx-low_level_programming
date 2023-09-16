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
	int (*calc_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc_func = get_op_func(argv[2]);
	if (calc_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
