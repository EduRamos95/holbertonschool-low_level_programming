#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints 'x' number to 98.
 * @n: This number is 'x' number
 * Return: Always 0.
 */
void print_to_98(int n)
{
	/*For number 'x' less than 98 - need to increment*/
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	/*For number 'x' greather than 98 - need to decrement*/
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	/*If is  98 - in this case only print number without space*/
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
