#include "main.h"

/**
 * main - Entry point
 * Description: Print "_putchar" in standaroutput
 * Return: Always 0 (Success)
 */

int main(void)
{
	int indice;
	char Array_char[] = "_putchar";

	/*Your code goes there*/
	for (indice = 0; indice < 8; indice++)
	{
		_putchar(Array_char[indice]);
	}
	_putchar('\n');
	return (0);
}
