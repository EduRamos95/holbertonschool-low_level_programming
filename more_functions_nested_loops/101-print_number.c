#include "main.h"

/**
 * print_number - prints number only use _putchar
 * @n: integer to print
 */
void print_number(int n)
{
	int num_nu;
	int size;
	int unid;
	int dig_position;

	size = 1;
	unid = n % 10;
	n = n / 10;
	num_nu = n;
	/*if the number is negative*/
	if (unid < 0)
	{
		unid = -unid;
		num_nu = -num_nu;
		n = -n;
		_putchar('-');
	}
	/*if the number has 2 digit or more*/
	/*because before "/10" the number*/
	if (num_nu > 0)
	{
		/*number total of digit in size */
		while (num_nu / 10 != 0)
		{
			num_nu = num_nu / 10;
			size = size * 10;
		}
		/*print digits except "unid" digit and reduce size*/
		/**/
		while (size > 0)
		{
			/*print the first digit*/
			dig_position = n / size;
			_putchar('0' + dig_position);
			/*need erase the first digit and pass next digit to first*/
			n = n - (dig_position * size);
			size = size / 10;
		}
	}
	_putchar('0' + unid);/*print only last digit*/
}
