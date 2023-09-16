#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to print opcodes of a given machine
 *
 * @argc: varable respresenting the number of arguments
 *
 * @argv: variable for arrray of strings
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	unsigned char *main_ptr;
	int count, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (unsigned char *)main;
	for (count = 0; count < bytes; count++)
	{
		printf("%02hhx", main_ptr[count]);
		if (count < bytes - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
