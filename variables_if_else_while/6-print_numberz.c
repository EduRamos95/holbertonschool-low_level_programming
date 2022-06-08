#include <stdio.h>

/**
  * main - Entry point
  * Description: print all single digit of base 10
  * Only use putchar twice
  * Return: Always 0 (Success)
  */

int main(void)
{
	int digit = '0';

	/*Your code goes there*/
	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
