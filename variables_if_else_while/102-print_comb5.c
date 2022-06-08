#include <stdio.h>

/**
  * main - Entry point
  * Description: Combination 00-99, print 2 digit per number
  * Don't use type 'char', Only use putchar 8 times
  * Return: Always 0 (Success)
  */

int main(void)
{
	int dec1, unid1, dec2, unid2;

	/*Your code goes there*/
	for (dec1 = '0'; dec1 <= '9'; dec1++)
	{
		for (unid1 = '0'; unid1 <= '9'; unid1++)
		{
			for (dec2 = dec1; dec2 <= '9'; dec2++)
			{
				for (unid2 = (unid1 + 1); unid2 <= '9'; unid2++)
				{
					putchar(dec1);
					putchar(unid1);
					putchar(' ');
					putchar(dec2);
					putchar(unid2);

					if (!((dec1 == '9' && unid1 == '8') && (dec2 == '9' && unid2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				unid2 = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
