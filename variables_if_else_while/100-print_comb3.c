#include <stdio.h>

/**
  * main - Entry point
  * Description: Combination 01 - 89
  * Don't use type 'char' , Only use putchar 5 times
  * Return: Always 0 (Success)
  */

int main(void)
{
	int dec, unid;
	/*Your code goes ther*/

	for (dec = '0'; dec <= '9'; dec++)
	{
		for (unid = (dec + 1); unid <= '9'; unid++)
		{
			putchar(dec);
			putchar(unid);
			if (dec != '8' || unid != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
