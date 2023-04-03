#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the list.
 * Return: Size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		if ((*h).str)
			printf("[%d] %s\n", (*h).len, (*h).str);

		h = (*h).next;
		i++;
	}

	return (i);
}
