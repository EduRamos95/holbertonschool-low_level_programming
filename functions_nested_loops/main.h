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
#endif
