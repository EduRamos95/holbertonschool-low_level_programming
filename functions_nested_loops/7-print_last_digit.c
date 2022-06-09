#include "main.h"

/**
 * print_last_digit - print the last digit of number
 * @dig: Number where extract the last digit
 * Return: the Last number
 */
int print_last_digit(int dig)
{
	int digX;

	/*Your goes here*/
	digX = dig % 10;
	if (digX < 0)
	{
		_putchar(-digX + '0');
		return (-digX);
	}
	else
	{
		_putchar(digX + '0');
		return (digX);
	}
}
