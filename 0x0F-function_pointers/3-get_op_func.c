#include "3-calc.h"
#include <stdlib.h>


/**
 * get_op_func - prototype function of type int that matchs operators to main
 *
 * condition - while loop iterates through the op.s[i] and continues till;
 *		it finds NULL to end array. the if statement checks if the
 *		character to be pointed by the array matches the first char
 *		of *s to return corresponding function pointer.
 *
 * @s: variable for operator string
 *
 * Return: returns pointer to corresponding op func, or NULL if not found
 */

int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (op_s[i].op)
	{
		if ((op_s[i].op) == s)
		{
			return (op_s[i].f);
		}
	}
	fprintf(stderr, "Error: Operation failed '%s'\n", s);
	return (NULL);
}
