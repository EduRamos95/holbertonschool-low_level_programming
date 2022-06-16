#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;
	int j;
	int length;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	length = i;

	if (length % 2 != 0)
		i = ((length - 1) / 2);
	else
		i = length / 2;

	for (j = i; str[j] != '\0'; j++)
		_putchar(str[j]);

	_putchar('\n');
}
