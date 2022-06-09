#include <stdio.h>
#include <stdlib.h>

/**
  * main - fibonacci number
  *
  * Return: 0 success
  */

int main(void)
{
	int times;
	unsigned long num1;
	unsigned long num2;
	unsigned long add;

	num1 = 1;
	num2 = 2;

	for (times = 0; times < 99; times++)
	{
		if (times == 0)
			printf("%lu", num1);
		add = num1 + num2;
		num1 = num2;
		num2 = add;
		printf(", %lu", num1);
	}
	printf("\n");
	return (0);
}
