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

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string.
 * @s: string
 */
void rev_string(char *s);

/**
 * puts2 - prints every second character of a string
 * @str: string to print
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str);
#endif
