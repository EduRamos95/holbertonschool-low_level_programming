#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	int num1, num2, mul;
/* (1=nameprogram, 2=num1, 3=num2)*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
/* atoi convert a string to an int */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
