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
	long num1;
	long num2;
	long add;

	num1 = 1;
	num2 = 2;

	for (times = 0; times < 49; times++)
	{
		if (times == 0)
			printf("%ld", num1);
		add = num1 + num2;
		num1 = num2;
		num2 = add;
		printf(", %ld", num1);
	}
	printf("\n");
	return (0);
}
