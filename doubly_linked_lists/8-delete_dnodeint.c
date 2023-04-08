#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head: double pointer to the head of list
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0 && (*(*head)).next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	while (index > 0)
	{
		if (tmp == NULL)
			return (-1);

		tmp = (*tmp).next;
		index--;
	}

	if (tmp == *head)
	{
		*head = (*tmp).next;
		(*(*head)).prev = NULL;
	}
	else
	{
		(*(*tmp).prev).next = (*tmp).next;
		if ((*tmp).next != NULL)
			(*(*tmp).next).prev = (*tmp).prev;
	}

	free(tmp);
	return (1);
}
