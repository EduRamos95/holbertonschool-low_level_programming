#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet;

	/*Your code goes here*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
