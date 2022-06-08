#include "main.h"

/**
 * _isalpha - verify for lowercase character
 * @c: character to verify
 * Return: 1 if lowercase and uppercase, 0 if not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
