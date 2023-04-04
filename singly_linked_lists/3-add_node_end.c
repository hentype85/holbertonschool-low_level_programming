#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add
 * Return: Null if fails or new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	while (str[len])
		len++;

	(*newNode).str = strdup(str);
	(*newNode).len = len;
	(*newNode).next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while ((*temp).next != NULL)
		temp = (*temp).next;

	(*temp).next = newNode;

	return (*head);
}
