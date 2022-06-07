#include <stdio.h>

/**
  * main - Entry point
  * This program show hte length of each datatype
  * it's depend your own system operative
  * Return: Always 0 (Success)
  */
int main(void)
{
	char character;
	int integer;
	long longinteger;
	long long longlonginteger;
	float flotante;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of an int: %zu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longinteger));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(longlonginteger));
	printf("Size of a float: %zu byte(s)\n", sizeof(flotante));
	return (0);
}
