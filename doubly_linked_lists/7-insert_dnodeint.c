#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position
 * where idx is the index of the list where the
 * new node should be added. Index starts at 0
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *tmp = *h;

	if (idx == 0)
		newNode = add_dnodeint(h, n);

	if (idx > 1)
	{
		tmp = (*tmp).next;

		if (tmp == NULL)
			return (NULL);

		idx--;
	}

	if ((*tmp).next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	(*newNode).n = n;
	(*newNode).prev = tmp;
	(*newNode).next = (*tmp).next;
	(*(*newNode).next).prev = newNode;
	(*newNode).next = newNode;

	return (newNode);
}
