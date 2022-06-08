#include <stdio.h>

/**
  * main - Entry point
  * Description: prints all possible combinations of single-digit numbers.
  * only use char 4 timrs, don't use variable type 'char'
  * Return: Always 0 (Success)
  */

int main(void)
{
	int Digit_number = 48;

	/*Your code goes there*/
	/*ASCII num 0 is 48 and num 9 is 57*/
	/*ASCII coma is 44, whitespace is 32*/
	/*ASCII new line is 10*/
	while (Digit_number <= 57)
	{
		putchar(Digit_number);
		if (Digit_number != 57)
		{
			putchar(44);
			putchar(32);
		}
		Digit_number++;
	}
	putchar(10);
	return (0);
}
