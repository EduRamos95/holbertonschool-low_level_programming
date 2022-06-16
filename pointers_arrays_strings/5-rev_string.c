#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
	int length;
	int l;
	char *y;
	int e;
	int x;
	char n;

	length = 0;
	l = 0;
	y = s;
	e = 0;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	l = length - 1;
	for (; e < ((l / 2) + 1); e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
