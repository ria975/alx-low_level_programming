#include "lists.h"

/**
 * list_len - returns the numberof element
 * @h: singly linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t new;

	new = 0;
	while (h != NULL)
	{
		h = h->next;
		new++;
	}
	return (new);;
}
