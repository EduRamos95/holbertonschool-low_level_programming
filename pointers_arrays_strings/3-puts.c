#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: address to print of value
 */
void _puts(char *str)
{
	int lenght;

	lenght = 0;
	/*'\0' to refers the endline*/
	while (*(str + lenght) != '\0')
	{
		_putchar(str[lenght]);
		lenght++;
	}
	_putchar('\n');
}
