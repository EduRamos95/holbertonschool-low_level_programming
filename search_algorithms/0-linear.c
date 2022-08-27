#include "search_algos.h"

/**
 * linear_search - searches for a value in array using the Linear search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int tmp;

	/*verify if array exist*/
	if (array != NULL)
	{
		/*access each element of the array with the value of size*/
		for (i = 0; i < size; i++)
		{
			tmp = array[i]; /*copy a element into tmp variable*/
			printf("Value checked array[%lu] = [%d]\n", i, tmp);
			if (tmp == value) /*if element is equal to value for search return index*/
				return (i);
		}
	}
	return (-1);
}
