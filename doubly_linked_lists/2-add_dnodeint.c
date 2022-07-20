#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a dlistint list
 *
 * @head: head of list
 * @n: value of element to add
 *
 * Return: NULL if fail, otherwise pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/*pointer to new node*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/*store a value in new node*/
	new->n = n;
	/*store 'actually head' in next element data*/
	new->next = *head;
	/*if head no exist -> the new element is head*/
	if (*head != NULL)
		(*head)->prev = new;
	/*condition to head is don't have previous element*/
	new->prev = NULL;
	/*new element is the new head*/
	*head = new;
	return (new);
}
