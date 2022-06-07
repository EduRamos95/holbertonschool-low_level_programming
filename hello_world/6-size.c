#include <stdio.h>

/**
  * main - Entry point
  * This program show hte length of each datatype
  * it's depend your own system operative
  * Return: Always 0 (Success)
  */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
