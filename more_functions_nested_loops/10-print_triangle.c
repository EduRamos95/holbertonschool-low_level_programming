#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle to draw "#"
 */
void print_triangle(int size)
{
	int H;
	int W;
	int draw;

	if (size > 0)
	{
		for (H = 1; size >= H; H++)
		{
			for (W = 1; W <= (size - H); W++)
				_putchar(' ');
			for (draw = 1; draw <= H; draw++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
