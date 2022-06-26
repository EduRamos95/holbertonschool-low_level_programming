#include "main.h"
#include <stdio.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	/*to suppress unused variable warning*/
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
