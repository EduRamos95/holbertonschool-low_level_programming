#include <stdlib.h>
#include "main.h"

/**
 * _printstr - prints a string
 *
 * @s: string to print
 */
void _printstr(char *s)
{
	while (*s)
		_putchar(*s++);
}

/**
 * num_str_chk - checks arg array to see if the are numeric strings, converts
 * from ascii to byte int, and returns their length. Segfault on null pointer.
 *
 * @s: string to check
 *
 * Return: Length of string. Exit 98 if not numeric.
 */
long int num_str_chk(char *s)
{
	long int len = 0;

	if (*s == 0)
	{
		_printstr("Error\n");
		exit(98);
	}

	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			_printstr("Error\n");
			exit(98);
		}
		*s -= '0';
		len++;
		s++;
	}
	return (len);
}

/**
 * _calloc_buffer - allocate a block of memory of size * num and init to '0'
 *
 * @num: number of elements to allocate
 * @size: size of element
 *
 * Return: pointer to allocated space, exit 98 on failure
 */
void *_calloc_buffer(long int num, long int size)
{
	void *ret;
	char *ptr;

	ret = malloc(num * size);
	if (ret == 0)
	{
		exit(98);
	}

	size = size * num;
	ptr = ret;
	ptr[--size] = 0;
	while (size--)
		ptr[size] = '0';

	return (ret);
}

/**
 * trimzero - moves pointer position to after last leading 0 in a string,
 * or last zero if all zeros
 *
 * @s: char * we want to move
 *
 * Return: new position
 */
char *trimzero(char *s)
{
	while (*s == '0')
		if (*(s + 1) != 0)
			s++;
		else
			break;
	return (s);
}

/**
 * main - multiply two  positive integer strings of arbitrary size
 *
 * @ac: number of arguments
 * @av: arugments
 *
 * Return: 0 if successful, 98 if failure
 */
int main(int ac, char **av)
{
	long int len1, len2, len_res, i, j;
	char *res;

	if (ac != 3)
	{
		_printstr("Error\n");
		return (98);
	}
	av[2] = trimzero(av[2]);
	av[1] = trimzero(av[1]);
	if (*av[1] == '0' || *av[2] == '0')
	{
		_printstr("0\n");
		return (0);
	}
	len1 = num_str_chk(av[1]);
	len2 = num_str_chk(av[2]);
	len_res = len1 + len2;
	res = _calloc_buffer(len_res + 1, sizeof(char));

	for (i = len_res - 1, len1--; len1 >= 0; len1--, i += len2 - 1)
		for (j = len2 - 1; j >= 0; j--, i--)
		{
			res[i] = (av[1][len1] * av[2][j] % 10) + res[i];
			res[i - 1] = (av[1][len1] * av[2][j] / 10) + res[i - 1];
			if (res[i] > '9')
			{
				res[i] -= 10;
				res[i - 1]++;
			}
		}

	if (*res == '0')
		_printstr(res + 1);
	else
		_printstr(res);
	_putchar('\n');
	free(res);

	return (0);
}
