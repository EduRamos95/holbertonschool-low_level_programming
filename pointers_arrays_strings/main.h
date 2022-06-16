#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standart output
 * @c: character to put to standart output
 * Return: 1 is success
 */
int _putchar(char c);

/**
 * reset_to_98 - updates the value it points to to 98.
 * @n: pointer int 'n'
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s);

/**
 * _puts - prints a string, followed by a new line
 * @str: address to print of value
 */
void _puts(char *str);
#endif
