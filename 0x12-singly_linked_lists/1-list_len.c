#include "lists.h"

/**
 *  list_len - funstion that lists the number of elements in a linked list
 *
 *  @h: pointer to the head of teh linked list
 *
 *  Return: numbers of element in a linked list_len list.
 */

size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
