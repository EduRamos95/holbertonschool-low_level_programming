#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *str_dup;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++; /* add null terminator to length */

	str_dup = malloc(sizeof(char) * len); /* allocate memory */

	if (str_dup == NULL) /* validate memory */
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(str_dup + i) = *(str + i);
		i++;
	}

	return (str_dup);
}
