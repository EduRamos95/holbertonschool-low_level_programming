#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strDup;
	int num;
	int i, j, length_1, length_2;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length_1 = 0;
	while (s1[length_1] != '\0')
		length_1++;
	length_2 = 0;
	while (s2[length_2] != '\0')
		length_2++;
	if (num < 0)
		return (NULL);
	if (num >= length_2)
		num = length_2;
	strDup = malloc(sizeof(char) * (length_1 + num + 1) + 5);
	if (strDup == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		strDup[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < num && s2[j] != '\0')
	{
		strDup[i] = s2[j];
		i++, j++;
	}
	strDup[i] = '\0';
	return (strDup);
}
