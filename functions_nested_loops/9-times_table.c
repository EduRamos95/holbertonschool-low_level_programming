#include "main.h"

/**
 * times_table - multiplex table
 * Description: print munber in table.
 */
void times_table(void)
{
	int ROW;
	int COL;
	int MUL;
	int M1d;
	int M2d;

	ROW = 0;
	while (ROW <= 9)
	{
		_putchar('0');
		COL = 1;
		while (COL <= 9)
		{
			MUL = ROW * COL;
			M1d = MUL / 10;
			M2d = MUL % 10;
			_putchar(',');
			_putchar(' ');
			if (MUL <= 9)
			{
				_putchar(' ');
				_putchar(MUL + '0');
			}
			else
			{
				M1d = MUL / 10;
				M2d = MUL % 10;
				_putchar(M1d + '0');
				_putchar(M2d + '0');
			}
			COL++;
		}
		ROW++;
		_putchar('\n');
	}
}
