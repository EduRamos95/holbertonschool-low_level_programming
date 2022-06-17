#include "main.h"

/**
 * *cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	/*check first index for capital*/
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0') /*iterate through string*/
	{
		switch (s[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 'a' + 'A';
				}
		}
		i++;
	}
	return (s);
}
