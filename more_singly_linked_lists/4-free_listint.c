#include "lists.h"
/**
 * free_listint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_listint(listint_t *head)
{
	if (head == NULL) /*stop when dont receive any address*/
	{
		return;
	}
	free_listint(head->next); /*pass to new element*/
	free(head);/*free the current element*/
}
