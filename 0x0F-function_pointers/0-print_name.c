#include "function_pointers.h"
#include <stdio.h>

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
	f(name);
}
