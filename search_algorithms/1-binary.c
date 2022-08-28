#include "search_algos.h"
/**
* print_array - prints array
* @array: array
* @start: start point
* @end: ending point
* Return: nothing
**/
void print_array(int *array, size_t start, size_t end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);
}

/**
* binary_search - a function that searches for a value in a
*sorted array of integers using the Binary search algorithm
* @array: pointer to the first element of the array
* @size: is the number of elements in array
* @value: value to search for
* Return: index OR -1
**/
int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0, end;
	int middle;

	end = size - 1;

	if (array == NULL || size <= 0)
		return (-1);
	if (size == 1)
	{
		return (array[start]);
	}
	while (end >= start)
	{
		/*in this point expect 2 or more elements*/
		if (start == 0 && end == 0)
			return (-1);
		print_array(array, start, end);
		middle = (end + start) / 2;
		printf("middle -> %d\n",middle);
		if (array[middle] == value)
			return (array[middle]);
		else if (array[middle] < value)
		{
			start = middle + 1;
		}
		else if (array[middle] > value)
		{
			end = middle - 1;
		}
	}
	return (-1);
}
