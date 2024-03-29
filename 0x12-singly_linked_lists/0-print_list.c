#include "lists.h"


/**
 * print_list - print all element of a list list_t
 *
 * @h: number of node
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
