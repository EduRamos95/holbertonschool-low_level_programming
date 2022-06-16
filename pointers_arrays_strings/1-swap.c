#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	/*need to create a temporaly space*/
	tmp = *a; /*save value of address 'a' in tmp*/
	*a = *b;  /*save value of address 'b' in address 'a'*/
	*b = tmp; /*save value of tmp in address 'b'*/
}
