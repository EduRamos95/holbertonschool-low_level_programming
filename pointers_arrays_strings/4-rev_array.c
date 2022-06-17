#include "main.h"

/**
 * reverses_array - the content of an array of integers
 * @a: array pointer
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int beg;
	int end;

	beg = 0;
	end = n - 1; /*omit null terminator in length*/

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++;
		end--;
	}
}
