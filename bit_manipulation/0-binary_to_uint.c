#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len_str = 0, index;
	unsigned int add = 0;

	if (b == NULL)
		return (add);

	/* find string length */
	while (b[len_str] != '\0')
		len_str++;
	len_str -= 1;

	/* iterate string and if '1' then multiply by power of 2 */
	/* get power of 2 via binary (e.g. 1<<2 = 100 in binary = 4) */
	index = 0;
	while (b[index])
	{
		if ((b[index] != '0') && (b[index] != '1'))
			return (0); /*return 0 for failed*/

		if (b[index] == '1')
			add += (1 << len_str); /*num of bits*/
		index++;
		len_str--;
	}

	return (add);
}
