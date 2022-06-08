#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Randow number to evaluate
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0)
		printf("is positive\n");
	else if(n<0)
		printf("is negative\n");
	else
		printf("iz zero\n");
	return (0);
}
