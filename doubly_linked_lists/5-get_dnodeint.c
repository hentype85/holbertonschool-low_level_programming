#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list
 * @head: head pointer to linked list
 * @index: nth node to get node
 * Return: nth node or NULL if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = (*head).next;
		index--;
	}

	if (head != NULL && index == 0)
		return (head);

	return (NULL);
}
