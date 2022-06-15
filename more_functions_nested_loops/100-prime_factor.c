#include <stdio.h>

/**
 * main - print largest prime factor of "612852475143"
 * Return: 0 for success
 */

int main(void)
{
	unsigned long num;
	unsigned long div;

	num = 612852475143;
	div = 2;

	while (div < num)
	{
		if (num % div == 0)
		{
			num = (num / div);
			div = 2;
		}
		else
			div++;
	}
	printf("%lu\n", num);
	return (0);
}
