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
	dlistint_t *newNode = NULL, *tmp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		newNode = add_dnodeint(h, n); /*insert node at the beginning of the list*/
	else
	{
		while (tmp != NULL && i < (idx - 1))
		{
			tmp = (*tmp).next;
			i++;
		}

		if (tmp != NULL || i == (idx - 1))
		{
			if ((*tmp).next == NULL) /*inset node at the end of list*/
				newNode = add_dnodeint(h, n);
			else
			{
				newNode = malloc(sizeof(dlistint_t));
				/* insert node in the middle of the list */
				if (newNode != NULL)
				{
					(*newNode).n = n;
					(*newNode).next = (*tmp).next;
					(*newNode).prev = tmp;

					(*(*tmp).next).prev = newNode;
					(*tmp).next = newNode;
				}
			}
		}
	}
	return (newNode);
}
