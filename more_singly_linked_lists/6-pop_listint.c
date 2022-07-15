#include "lists.h"

/**
 * pop_listint - deletes a element on a list
 * @head - pointer to head
 * Return: element_delete->'n'
 */
int pop_listint(listint_t **head)
{
	int value_head;
	listint_t *new_head;

	if (head == NULL || *head == NULL)
		return (0);

	value_head = (*head)->n; /*extrac value of 1st element*/
	new_head = (*head)->next; /*new_head is 2st element*/
	free(*head);/*free 1st element*/
	*head = new_head;/*2st element convert in 1st element*/
	return (value_head);/*return value*/
}
