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
 * _strdup - recreation of string duplicate function
 * @src: source of string to duplicate
 * Return: pointer to malloc'd space with copied string
 */
void *_strdup(const char *src)
{
	int len, i;
	char *new_str;

	len = _strlen(src);
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		new_str[i] = src[i];
	new_str[i] = '\0';
	return (new_str);
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
	list_t *new_end = malloc(sizeof(list_t));
	list_t *last_node;


	if (!head || !new_end) /*validate input and malloc*/
		return (NULL);
	if (str != NULL)
	{
		new_end->str = _strdup(str);
		if (new_end->str == NULL)
		{
			free(new_end->str);
			return (NULL);
		}
		new_end->len = _strlen(new_end->str);
	}
	new_end->next = NULL;
	if (*head == NULL) /*1st element on linked list*/
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
