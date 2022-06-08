#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 in lowercase
 * Return: 0 Always is (success)
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int iteration;

	/*Your code goes here*/
	for (iteration = 1; iteration <= 10; iteration++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
