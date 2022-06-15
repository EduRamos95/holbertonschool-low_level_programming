#include "main.h"

/**
 * more_numbers - print numbers 0-14 for 10 times
 */
void more_numbers(void)
{
	char i;
	int cont;

	for (cont = 0; cont <= 9; cont++)
	{

		for (i = 0; i <= 14; i++)
		{
			/*print 2 digits*/
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
