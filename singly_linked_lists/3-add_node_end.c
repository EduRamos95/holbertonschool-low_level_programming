#include "lists.h"
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *last_node;


	if (!head || !new_end) /*validate input and malloc*/
		return (NULL);
	if (str != NULL)
	{
		new_end->str = strdup(str);
		if (new_end->str == NULL)
		{
			free(new_end->str);
			return (NULL);
		}
		new_end->len = strlen(new_end->str);
	}
	new_end->next = NULL;

	if(*head == NULL) /*1st element on linked list*/
	{
		*head = new_end;
		return (*head);
	}
	last_node = *head;/*head point 1st element*/
	while (last_node->next != NULL) /*loop to find last_node*/
		last_node = last_node->next; /*save last address*/
	last_node->next = new_end; /*finally point to last element*/
	return (new_end);/*return new address*/
}
