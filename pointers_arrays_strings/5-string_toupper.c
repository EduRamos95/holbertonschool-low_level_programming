#include "main.h"
/**
 * *string_toupper - capitalize all letter in string
 * @s: string to manipulate
 * Return: string with all letters capitalize
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
