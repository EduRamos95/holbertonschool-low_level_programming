#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 below 1024 ok
 * Return: Always 0
 */
int main(void)
{
	int Num;
	int Add;

	Add = 0;
	for (Num = 0; Num < 1024; Num++)
	{
		if ((Num % 3 == 0) || (Num % 5 == 0))
		{
			Add = Add + Num;
		}
	}
	printf("%d\n", Add);
}
