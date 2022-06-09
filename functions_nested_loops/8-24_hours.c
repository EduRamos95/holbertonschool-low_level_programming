#include "main.h"

/**
 * jack_bauer - Prints hour and minute of one day
 * Description: prints time 00:00 to 23:59
 */

void jack_bauer(void)
{
	int HOUR, MIN, d1H, d2H, d1M, d2M;

	/*Your code goes here*/
	HOUR = 0;
	while (HOUR < 24)
	{
		MIN = 0;
		while (MIN < 60)
		{
			/*Extract each digit of HOUR and MINUTE*/
			d1H = HOUR / 10;
			d2H = HOUR % 10;
			d1M = MIN / 10;
			d2M = MIN % 10;
			/*Print the time per digit*/
			_putchar('0' + d1H);
			_putchar('0' + d2H);
			_putchar(':');
			_putchar('0' + d1M);
			_putchar('0' + d2M);
			_putchar('\n');
			MIN++;
		}
		HOUR++;
	}
}
