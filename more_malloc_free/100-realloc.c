#include <stdlib.h>
#include "main.h"
/**
 * *_realloc -  reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: already allocated size
 * @new_size: new size to allocate
 * Return: pointer to newly allocated memory or null
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr = 0;
	char *write, *read;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > 0 || ptr == NULL)
	{
		newptr = malloc(new_size * sizeof(void *));
		if (newptr == NULL)
			return (NULL);
	}
	if (new_size > 0 && ptr != NULL)
	{
		write = newptr;
		read = ptr;
		if (new_size < old_size)
			old_size = new_size;
		i = 0;
		while (i < old_size)
		{
			*((void *)write + i) = *((void *)read + i);
			i++;
		}
	}
	free(ptr);
	return (newptr);
}
