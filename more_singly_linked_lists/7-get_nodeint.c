#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 *
 * @head: head of list
 * @index: index of node
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index) /*go for access to element*/
	{
		if (head != NULL)
			head = head->next; /*give address to next element*/
		else
			return (NULL);
		index--;
	}
	return (head);/*return address node*/
}
