#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet except 'q' an 'e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c_alphabet = 'a';

	/*Your code goes there */
	while (c_alphabet <= 'z')
	{
		if ((c_alphabet != 'q') && (c_alphabet != 'e'))
			putchar(c_alphabet);
		c_alphabet++;
	}
	putchar('\n');
	return (0);
}
