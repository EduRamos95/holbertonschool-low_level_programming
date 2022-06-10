#include <stdio.h>
#include <stdlib.h>

/**
  * main - fibonacci number
  *
  * Return: 0 success
  */

int main(void)
{
	int times;
	int over;
	unsigned long num1;
	unsigned long num2;
	unsigned long add;
	long head_1;
	long tail_1;
	long head_2;
	long tail_2;
	long head_add;
	long tail_add;

	num1 = 1;
	num2 = 1;
	printf("%lu", num1);
	for (times = 2; times < 93; times++) /*still works*/
	{
		add = num1 + num2; /*add = next valor*/
		num1 = num2;       /*replace first <-- second*/
		num2 = add;        /*replace second <-- nex valor*/
		printf(", %lu", add);
	}
	/*need artifice // part number in 2*/
	head_1 = num1 / 1000000000;
	tail_1 = num1 % 1000000000;
	head_2 = num2 / 1000000000;
	tail_2 = num2 % 1000000000;
	for (; times < 99; times++)
	{
		over = (tail_1 + tail_2) / 1000000000;
		tail_add = (tail_1 + tail_2) - (1000000000 * over);
		head_add = (head_1 + head_2) + over;
		printf(", %lu%lu", head_add, tail_add);
		head_1 = head_2;
		tail_1 = tail_2;
		head_2 = head_add;
		tail_2 = tail_add;
	}
	printf("\n");
	return (0);
}
