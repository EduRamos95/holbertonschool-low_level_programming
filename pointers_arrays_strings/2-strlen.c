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
