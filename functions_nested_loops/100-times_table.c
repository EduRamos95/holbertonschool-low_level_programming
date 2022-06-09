#include "main.h"

/**
 * print_times_table - Show table of multiplication of 'n'.
 * Description: no show nothing is 'n' > 15 or 'n' < 0 .
 * @n: table of 'n'
 */
void print_times_table(int n)
{
	int ROW;
	int COL;
	int MUL;

	if (n >= 0 && n <= 15)
	{
		for (ROW = 0; n >= ROW; ROW++)
		{
			_putchar('0');
			for (COL = 1; n >= COL; COL++)
			{
				MUL = ROW * COL;
				_putchar(',');
				_putchar(' ');
				if (MUL <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + MUL);
				}
				else if (MUL >=  10 && MUL <= 99)
				{
					_putchar(' ');
					_putchar('0' + (MUL / 10));
					_putchar('0' + (MUL % 10));
				}
				else if (MUL >= 100 && MUL < 999)
				{
					_putchar('0' + (MUL / 100));
					_putchar('0' + ((MUL / 10) % 10));
					_putchar('0' + (MUL % 10));
				}
			}
		}
		_putchar('\n');
	}
}
