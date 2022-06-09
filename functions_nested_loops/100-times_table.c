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
	int M1u; /*dig unid of product*/
	int M2d; /*dig dec of product*/
	int M3c; /*dig cent of product*/

	if (n >= 0 && n <= 15)
	{
		for (ROW = 0; ROW <= n; ROW++)
		{
			for (COL = 0; COL <= n; COL++)
			{
				MUL = ROW * COL;
				if (COL == 0)
				{
					_putchar('0' + MUL);
				}
				else
				{
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
						M1u = MUL % 10;
						M2d = MUL / 10;
						_putchar(' ');
						_putchar('0' + M2d);
						_putchar('0' + M1u);
					}
					else if (MUL >= 100 && MUL < 999)
					{
						M1u = MUL % 10;
						M2d = (MUL / 10) % 10;
						M3c = MUL / 100;
						_putchar('0' + M3c);
						_putchar('0' + M2d);
						_putchar('0' + M1u);
					}
				}
			}
			_putchar('\n');
		}
	}
}
