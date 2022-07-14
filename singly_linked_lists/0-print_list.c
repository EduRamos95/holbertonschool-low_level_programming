#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int number_of_elements = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
