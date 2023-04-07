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
	if (idx == 0)	/*insert node beginning of the list*/
		newNode = add_dnodeint(h, n);
	else
	{
		if (tmp != NULL)
		{
			while ((*tmp).prev != NULL)
				tmp = (*tmp).prev;
		}

		while (tmp != NULL)
		{
			if (i == idx)
			{
				if ((*tmp).next == NULL) /*insert node at the end of list*/
					newNode = add_dnodeint_end(h, n);
				else
				{
					newNode = malloc(sizeof(dlistint_t));

					if (newNode != NULL)
					{
						(*newNode).n = n;
						(*newNode).next = (*tmp).next;
						(*newNode).prev = tmp;

						(*(*tmp).next).prev = newNode;
						(*tmp).next = newNode;
					}
				}
				break;
			}
			tmp = (*tmp).next;
			i++;
		}
	}
	return (newNode);
}
