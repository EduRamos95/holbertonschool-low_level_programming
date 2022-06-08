#include <stdio.h>

/**
  * main - Entry point
  * Description: Print number of base16
  * Return: Always 0 (Success)
  */

int main(void)
{
	char Digit = '0';

	/*Your code goes ther*/
	while (Digit <= '9')
	{
		putchar(Digit);
		Digit++;
	}

	Digit = 'a';

	while (Digit <= 'f')
	{
		putchar(Digit);
		Digit++;
	}

	putchar('\n');
	return (0);
}
