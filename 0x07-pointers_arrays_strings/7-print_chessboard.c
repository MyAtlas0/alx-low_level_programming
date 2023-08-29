#include "main.h"

/**
 * print_chessboard - prototype function to print chessboard
 *
 * loop condition - iterates both sides  using a neexted for loop
 *
 * @a: variable to print strings in a 2_dimendional array
 *
 * Return: returns nothing
 */

void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
