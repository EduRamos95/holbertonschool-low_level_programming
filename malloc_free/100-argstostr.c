#include <stdlib.h>
#include "main.h"
/**
 * argstostr - converts array of strings to one string with newline separators
 *
 * @ac: number of strings
 * @av: array of strings
 *
 * Return: char * to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int size = 0, i;
	char *ptr, *ret, *retptr;

	if (ac == 0 || !av) /*when don't have argument*/
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		ptr = av[i]; /*address of each element*/
		while (*ptr++) /*pointer to elemen /++ next value*/
			size++; /*increment (size of byte / char )*/
	}

	ret = malloc(size + 1 + ac); /*space required*/
	if (!ret)
		return (NULL);

	retptr = ret; /*save the pointer to dont lose address*/
	for (i = 0; i < ac; i++)
	{
		for (ptr = av[i]; *ptr; ptr++, retptr++)
		{
			*retptr = *ptr; /*copy char into malloc*/
		}
		*retptr++ = '\n';/*need separate sttings en newline*/
	}

	return (ret);
}
