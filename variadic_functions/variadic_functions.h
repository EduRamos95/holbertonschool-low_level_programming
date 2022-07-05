#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print - struct
 * @symbol: letter signifying data type
 * @print: function ptrint
 */
typedef struct print
{
	char *symbol;
	void (*print)(va_list arg);

} print_t;
#endif
