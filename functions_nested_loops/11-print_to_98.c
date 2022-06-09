#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints 'x' number to 98.
 * @Num: This number is 'x' number
 * Return: Always 0.
 */
void print_to_98(int Num)
{
	/*For number 'x' less than 98 - need to increment*/
	while (Num < 98)
	{
		printf("%d, ", Num);
		Num++;
	}
	/*For number 'x' greather than 98 - need to decrement*/
	while (Num > 98)
	{
		printf("%d, ", Num);
		Num--;
	}
	/*If is  98 - in this case only print number without space*/
	if (Num == 98)
	{
		printf("%d\n", Num);
	}
}
