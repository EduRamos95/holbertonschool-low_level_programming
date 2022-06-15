#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n: number of characters to draw "_"
 */
void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');
	_putchar('\n');
}
