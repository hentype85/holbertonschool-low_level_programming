#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * @head: double pointer to the head of the list
 * @n: data to add
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	(*newNode).n = n;
	(*newNode).next = *head;
	(*newNode).prev = NULL;

	if (*head != NULL)
		(*(*head)).prev = newNode;

	*head = newNode;

	return (newNode);
}
