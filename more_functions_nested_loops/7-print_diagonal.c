#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of characteres to draw "\"
 */
void print_diagonal(int n)
{
	int space;
	int back_slash;

	if (n > 0)
	{
		for (back_slash = 1; back_slash <= n; back_slash++)
		{
			for (space = 1; space < back_slash; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
