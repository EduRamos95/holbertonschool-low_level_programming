#include "main.h"

/**
 * _isdigit - verify one digit 0-9
 * @c: digit to verify
 * Return: 1 if is true, 0 if is false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
