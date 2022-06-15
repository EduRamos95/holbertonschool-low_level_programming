#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standart output
 * @c: character to put to standart output
 */
int _putchar(char c);

/**
 * _isupper - verify uppercase character
 * @c: character to verify.
 * Return: 1 if is true, 0 if is false
 */
int _isupper(int c);

/**
 * _isdigit - verify one digit 0-9
 * @c: digit to verify
 * Return: 1 if is true, 0 if is false
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: is a integer
 * @b: is other integer
 * Return: product of 'a' and 'b'
 */
int mul(int a, int b);

/**
 * print_numbers - print 0 - 9
 */
void print_numbers(void);

/**
 * print_most_numbers - prints the numbers except 2 and 4
 */
void print_most_numbers(void);


#endif
