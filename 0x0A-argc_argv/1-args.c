#include "main.h"

/**
 * main - main function of program that prints number of arguments
 *
 * (void)argv - ignores the value of argc
 *
 * @argc: variable for number of arguments
 *
 * @argv: variable for array that stores arguments
 *
 * Return: return 0, to terminate program
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
