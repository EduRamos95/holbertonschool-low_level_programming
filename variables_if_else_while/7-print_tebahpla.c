#include <stdio.h>

/**
 * main - Entry point
 * Print alphabet reverse only use putchar twice
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c_alphabet;

	/*Your code goes there */
	/*ASCII a=97 and z=122 */
	for (c_alphabet = 122; c_alphabet >= 97; c_alphabet--)
		putchar(c_alphabet);
	putchar('\n');
	return (0);
}
