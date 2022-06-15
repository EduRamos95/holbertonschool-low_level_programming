#include "main.h"

/**
 * print_square -  prints a square
 * @size: size to dran "#"
 */

void print_square(int size)
{
	int ROW;
	int COL;

	if (size > 0)
	{
		for (ROW = 1; size >= ROW; ROW++)
		{
			for (COL = 1; size >= COL; COL++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
