#ifndef MAIN_H
#define MAIN_H

/**
 *_putchar - writes the character 'c' to standaroutput
 *@c : The character to print in ASCII
 *Return: Always 1 is (success)
 *Error: -1 is returned.
 */
int _putchar(char c);

/**
 * print_alphabet - print the alphabet in loweracse
 */
void print_alphabet(void);

/**
 * print_alphabet - print the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void);

/**
 * _islower - verify lowercase character
 * @c: character to verify
 * Return: 1 if lowrcase, 0 if uppercase
 */
int _islower(int c);

/**
 * _isalpha - verify all alphabet character
 * @c: character to verify
 * Return: 1 if lowercase and uppercase, 0 if not alphabet
 */
int _isalpha(int c);

/**
 * print_sign - print sign of number
 * @n: number to verify
 * Return: 1 if greater than zero, 0 if is zero, -1 if less than zero
 */
int print_sign(int n);

/**
 * _abs - show absolute value of integer
 * @abs: integer to converter
 * Return: absolute value
 */
int _abs(int abs);

/**
 * print_last_digit - print the last digit of number
 * @dig: Number where extract the last digit
 * Return: the Last number
*/
int print_last_digit(int dig);

/**
 * jack_bauer - Prints hour and minute of one day
 * Description: prints time 00:00 to 23:59
 */
void jack_bauer(void);

/**
 * times_table - multiplex table
 * Description: print munber in table.
 */
void times_table(void);

 /**
  * add - Calcule adition beetwen 2 numbers
  *@Number1: number one
  *@Number2: number two
  * Return: Number1 + Number2 (adition)
  */
int add(int Number1, int Number2);

 /**
  * print_to_98 - prints 'x' number to 98.
  * @n: This number is 'x' number
  * Return: Always 0.
  */
void print_to_98(int n);

 /**
  * print_times_table - Show table of multiplication of 'n'.
  * Description: no show nothing is 'n' > 15 or 'n' < 0 .
  * @n: table of 'n'
  */
void print_times_table(int n);
#endif
