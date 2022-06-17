#include "main.h"

/**
 * *_strncpy - copies n bytes of a source into buffer of a dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int n;

	for (i = 0; i < n && *(src + i); i++)
		*(dest + i) = *(src + i);
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
