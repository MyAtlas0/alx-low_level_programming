#include <unistd.h>

/**
 * main - this is the entry function
 *
 * write - used to write specific strings to standard error (stderr=2)
 *
 * Return: returns 1 as required to the write()function
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
