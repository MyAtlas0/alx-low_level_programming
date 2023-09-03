#include "main.h"
#include <stdlib.h>

/**
 * main - main function of program
 *
 * if_else contition - print result if argument >= 3 else Error
 *
 * @argc: variable for arguments in the program
 *
 * @argv: variable for array soring the arguments
 *
 * Return: returns 0, to terminate program
 */

int main(int argc, char *argv[])
{
	int num_1 = atoi(argv[1]);
	int num_2 = atoi(argv[2]);
	int result = num_1 * num_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);	
}
