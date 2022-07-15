#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node) /*input & malloc verify*/
		return (NULL);
	new_node->n = n; /*n is store in new_node*/
	if (*head) /*if head already exist - min 1 element has been created*/
		new_node->next = *head; /*store address head*/
	*head = new_node; /*new_node convert in new_head*/
	return (new_node); /*return address the new element of linked list*/
}
