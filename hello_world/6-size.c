#include <stdio.h>

/**
  * main - Entry point
  * This program show hte length of each datatype
  * it's depend your own system operative
  * Return: Always 0 (Success)
  */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
