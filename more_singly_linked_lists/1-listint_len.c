#include "lists.h"

/**
 * listint_len - prints a total node of linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t count_node = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count_node++;
	}
	return (count_node);
}
