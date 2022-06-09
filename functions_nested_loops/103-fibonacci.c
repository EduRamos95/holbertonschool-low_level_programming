#include <stdio.h>
#include <stdlib.h>

/**
  * main - fibonacci number
  *
  * Return: 0 success
  */

int main(void)
{
	long cont_add;
	long num1;
	long num2;
	long add;

	num1 = 1;
	num2 = 2;
	cont_add = 0;

	while (num2 < 4000000)
	{
		/*if (num1 == 1)*/
		/*	printf("%ld", num1);*/
		add = num1 + num2;
		num1 = num2;
		num2 = add;
		/*printf(", %ld", num1);*/
		if (( num2 <= 4000000) && (num2 % 2 == 0))
			cont_add = cont_add + num2;
	}
	printf("%ld\n",cont_add);
	return (0);
}
