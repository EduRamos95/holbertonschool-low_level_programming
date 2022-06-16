#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int lenght;

	lenght = 0;
	/*'\0' it's refer to endline*/
	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: pointer
 * @src: pointer
 * Return: copy of original source
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}
