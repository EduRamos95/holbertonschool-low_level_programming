#include <stdio.h>

/**
  * main - Entry point
  * Description: Combination 00-99, print 2 digit per number
  * Don't use type 'char', Only use putchar 8 times
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num1;
	int num2;
	int d1;
	int u1;
	int d2;
	int u2;

	/*Your code goes there*/
	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			if (num1 < num2)
			{
				d1 = num1 / 10;
				u1 = num1 % 10;
				d2 = num2 / 10;
				u2 = num2 % 10;
				putchar(d1 + '0');
				putchar(u1 + '0');
				putchar(' ');
				putchar(d2 + '0');
				putchar(u2 + '0');
				if (!(num1 == 98 && num2 == 99))
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
