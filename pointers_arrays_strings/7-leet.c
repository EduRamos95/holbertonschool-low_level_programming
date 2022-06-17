#include "main.h"

/**
 * *leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */
char *leet(char *s)
{
	char a[11] = "aAeEoOtTlL";
	char b[11] = "4433007711";

	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (s[j] == a[i])
				s[j] = b[i];
		}
	}
	return (s);
}
