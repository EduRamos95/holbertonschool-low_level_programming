#include <stdio.h>

/**
  * main - Entry point
  * Description: Combination 012 - 789
  * Don't use type 'char' , Only use putchar 6 times
  * Return: Always 0 (Success)
  */

int main(void)
{
	int cent, dec, unid;
	/*Your code goes ther*/

	for (cent = '0'; cent <= '9'; cent++)
	{
		for (dec = (cent + 1); dec <= '9'; dec++)
		{
			for (unid = (dec + 1); unid <= '9'; unid++)
			{
				putchar(cent);
				putchar(dec);
				putchar(unid);
				if (cent != '7' || dec != '8' || unid != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
