#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - prototype_1 function for adding two values
 *
 * @a: variable for first input value
 *
 * @b: Variable for second input value
 *
 * Return: returns the result of addition
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - prototype_2 function for subtracting two values
 *
 * @a: variable for first input value
 *
 * @b: Variable for second input value
 *
 * Return: returns the result of subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - prototype_3 function for multipling two values
 *
 * @a: variable for first input value
 *
 * @b: Variable for second input value
 *
 * Return: returns the result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - prototype_4 function for the division of two values
 *
 * @a: variable for first input value
 *
 * @b: Variable for second input value
 *
 * Exit - handles division by zero error
 *
 * Return: returns the result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		exit(EXIT_FAILURE);
	}
	return (a / b);
}


/**
 * op_mod - prototype_5 function for the remainder of two values
 *
 * @a: variable for first input value
 *
 * @b: Variable for second imput value
 *
 * Exit - handles moldule by zero error
 *
 * Return: returns the remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		exit(EXIT_FAILURE);
	}
	return (a % b);
}
