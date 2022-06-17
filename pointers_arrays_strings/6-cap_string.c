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
		switch (n[i])
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
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] = n[i + 1] - 'a' + 'A';  
				}
		}
		i++;
	}
	return (s);
}
