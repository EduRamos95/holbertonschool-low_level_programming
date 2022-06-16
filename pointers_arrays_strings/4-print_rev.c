#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = 0;
	/*find length of string and point the last character*/
	while (*s != '\0')
	{
		length++;
		s++;
	}
	/*back one before null character*/
	s--;
	/*print in reverse*/
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
