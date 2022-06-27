#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *str; /*pointer to char*/
	unsigned int i; /*counter or index*/

	if (size <= 0) /*validate size input*/
		return (NULL);
	str = malloc(sizeof(char) * size); /*allocate memory*/
	if (str == NULL) /*validate memory*/
		return (NULL);
	i = 0;/*inicializate*/
	while (i < size)
	{
		str[i] = c; /*all values*/
		i++;/*increment or step*/
	}
	return (str);
}
