#include "main.h"

/**
 * _strcmp - compare to string
 * @s1: one string
 * @s2: second string
 * Return: int that tells num spaces in between
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;
	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
