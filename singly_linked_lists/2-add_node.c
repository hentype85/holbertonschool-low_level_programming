#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t
 * @str: string to add in the node
 * Return: adress of the new element or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);

	while (str[len])
		len++;

	(*p).str = strdup(str);
	(*p).len = len;
	(*p).next = (*head);

	(*head) = p;

	return (*head);
}
