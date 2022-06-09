#include "main.h"

/**
 * print_last_digit - print the last digit of number
 * @dig: Number where extract the last digit
 * Return: the Last number
 */
int print_last_digit(int dig)
{
	if (dig < 0)
		dig = -dig;
	_putchar('0' + (dig % 10));
	return (dig % 10);
}
