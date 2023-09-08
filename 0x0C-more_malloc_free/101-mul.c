#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 *
 *
 */

int main(int argc, char *argv[]);

void multiply(char *num1, char *num2)
{
	int i, n;
	int len_1 = 0;
	int len_2 = 0;
	int remainder, product;
	int result_len = 0;
	unsigned long int *result;

	while (num1[len_1] != '\0') len_1++;
	while (num1[len_2] != '\0') len_2++;
	
	result_len = len_1 + len_2;
	result = malloc(sizeof(int) * result_len);
	if (result == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (i = 0; i < result_len; i++)
	{
		result[i] = 0;
	}
	for (i = (len_1 - 1); i >= 0; i--)
	{
		remainder = 0;
		for (n = (len_2 - 1); n >= 0; n--)
		{
			product = (num1[i] - '0') * (num2[n] - '0') + remainder + result[i + n + 1];
			remainder = product / 10;
			result[i + n + 1] = product % 10;
		}
		result[i + n + 1] = remainder;
        }
	for (i = 0; i < result_len; i++)
	{
		if (result[i] != 0)
		{
			break;
		}
	}
	if (i == result_len)
	{
		_putchar('0');
	}
	else
	{
		for (; i < result_len; i++)
		{
			_putchar(result[i] + '0');
		}
	}
	_putchar('\n');
	free(result);
}

/**
 *
 *
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int i;
	char *num1;
	char *num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (num1[i] < '0' || num1[i] > '9')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (num2[i] < '0' || num2[i] > '9')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (98);
		}
	}
	multiply(num1, num2);
	return (0);
}
