#include "lists.h"

/**
  * delete_nodeint_at_index - delete a node at index
  * @head: head of the list
  * @index: location of the node to delete
  * Return: pointer to head of list
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);/*-1 if is failed*/
	current = *head;/*copy 1st address*/
	if (index == 0)/*index on 1st element*/
	{
		*head = (*head)->next; /*move 2nd element is new 1st element*/
		free(current);/*delete old_1st element*/
		return (1);/*1 for success*/
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next; /*move to next element*/
		if (current == NULL) /*not more address to access*/
			return (-1);/*-1 if is failed*/
	}
	subsequent = current->next; /*point to element to delete*/
	current->next = subsequent->next;/*save address of 2nd element from current*/
	free(subsequent);/*delete the element*/
	return (1);/*1 for success*/
}
