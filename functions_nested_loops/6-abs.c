#include "main.h"

/**
 * _abs - show absolute value of integer
 * @abs: integer to evaluate
 * Return: absolute value
 */
int _abs(int abs)
{
	if (abs > 0)
		return (abs);
	else if (abs < 0)
		return (-abs);
	return (0);
}
