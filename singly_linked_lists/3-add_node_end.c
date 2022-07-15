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
 * add_node_end - adds a node in the end of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: address of pointer to end element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end;
	list_t *last_node;


	if (str == NULL) /*validate input and malloc*/
		return (NULL);
	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
	{
		free(new_end);
		return (NULL);
	}
	new_end->str = strdup(str);
	if (new_end->str == NULL)
	{
		free(new_end->str);
		free(new_end);
		return (NULL);
	}
	new_end->len = _strlen(new_end->str);
	new_end->next = NULL;
	if (*head == NULL) /*1st element on linked list*/
	{
		*head = new_end;
		return (new_end);
	}
	last_node = *head;/*head point 1st element*/
	while (last_node->next != NULL) /*loop to find last_node*/
		last_node = last_node->next; /*save last address*/
	last_node->next = new_end; /*finally point to last element*/
	return (new_end);/*return new address*/
}
