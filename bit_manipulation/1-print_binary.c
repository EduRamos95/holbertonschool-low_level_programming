#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int flag, mask;

	if(n == 0)
		_putchar('0');
	/*mask is (#bytes x #bits)-1*/
	mask = (sizeof(n) * 8) - 1;
	/*flag is for detect the first 1*/
	flag = 0;
	for (;mask >= 0;mask--)
	{
		if ((n >> mask) & 1)
			flag = 1;
		if (flag == 1)
			((n >> mask) & 1) ? _putchar('1') : _putchar('0');
	}
}
