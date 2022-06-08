#include <stdio.h>

/**
  * main - Entry point
  * Description: print all single digit of base 10
  * Return: Always 0 (Success)
  */

int main(void)
{
	int digit = 0;

	/*Your code goes there*/
	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
