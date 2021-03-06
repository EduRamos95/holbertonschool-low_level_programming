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

/**
 * print_array - prints 'n' elements of an array of integers
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n);

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: pointer
 * @src: pointer
 * Return: copy the string
 */
char *_strcpy(char *dest, char *src);

/**
 * *_strcat - concatenates two strings
 * @dest: string to rewrite
 * @src: string to copy in other
 * Return: new string
 */
char *_strcat(char *dest, char *src);

/**
 * *_strncat - concatenates two strings,
 * use at most n bytes from src
 * @dest: string to rewrite
 * @src: string to copy in other
 * @n: number of bytes (char)
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * *_strncpy - copies n bytes of a source into buffer of a dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare to string
 * @s1: one string
 * @s2: second string
 * Return: int that tells num spaces in between
 */
int _strcmp(char *s1, char *s2);

/**
 * reverses_array -  the content of an array of integers
 * @a: array pointer
 * @n: number of elements in array
 */
void reverse_array(int *a, int n);

/**
 * *string_toupper - capitalize all letter in string
 * @s: string to manipulate
 * Return: string with all letters capitalize
 */
char *string_toupper(char *s);

/**
 * *cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: string
 */
char *cap_string(char *s);

/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s);

/**
 * *leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */
char *leet(char *s);

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */
void print_number(int n);

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate 1st occurrence of character in string
 * and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string as
 */
char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that
 * matches a byte in accepted target
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size);

/**
 * set_string - set value of pointer to a char
 * @s: variable of type pointer
 * @to: char
 */
void set_string(char **s, char *to);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);

int _atoi(char *s);

#endif
