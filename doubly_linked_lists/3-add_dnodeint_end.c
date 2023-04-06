#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: double pointer to the head of list
 * @n: add to the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *endNode = *head;

	if (newNode == NULL)
		return (NULL);

	(*newNode).n = n;
	(*newNode).next = NULL;

	if (*head == NULL)
	{
		(*newNode).prev = NULL;
		*head = newNode;

		return (*head);
	}

	while ((*endNode).next)
		endNode = (*endNode).next;

	(*newNode).prev = endNode;
	(*endNode).next = newNode;

	return (newNode);
}
