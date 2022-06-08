#include <stdio.h>

/**
 * main - Entry point
 * Print alphabet lower and upper case only use putchar three times
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c_alphabet;

	/*Your code goes there */
	/*ASCII a=97 and z=122 */
	/*ASCII A=65 and Z=90 */
	for (c_alphabet = 97; c_alphabet <= 122; c_alphabet++)
		putchar(c_alphabet);
	for (c_alphabet = 65; c_alphabet <= 90; c_alphabet++)
		putchar(c_alphabet);
	putchar('\n');
	return (0);
}
