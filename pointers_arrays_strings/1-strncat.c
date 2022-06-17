#include "main.h"

/**
 * *_strncat - concatenates two strings,
 * use at most n bytes from src
 * @dest: string to rewrite
 * @src: string to copy in other
 * @n: number of bytes (char)
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j) != *(src + n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
