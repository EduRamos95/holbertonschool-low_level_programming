#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	int num = 0;
	char *c;

	for (i = (argc - 1); i >= 1; i--)
	{
		c = argv[i];
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] < '0' || c[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
