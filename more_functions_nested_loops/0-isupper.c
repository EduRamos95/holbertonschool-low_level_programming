#include "main.h"

/**
 * _isupper - verify uppercase character
 * @c: character to verify
 * Return: 1 if is true, 0 if is false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
