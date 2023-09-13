#include "function_pointers.h"

/**
 * print_name - prototype function to print name using function of void
 *
 * @name: variable for name to be printed
 *
 * @f: variable for function pointer to call name
 *
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}

/**
 * print_name_function - simple functon to print name
 *
 * @name: variable for name to be printed
 */

void print_name_function(char *name)
{
	printf("Name: %s\n", name);
}
