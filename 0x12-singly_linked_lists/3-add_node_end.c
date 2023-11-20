#include "lists.h"

/**
 * add_node_end - adds node the end of linked list
 *
 * @head: pointer ro the first node
 * @str: the string data in node
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;

	size_t i, count = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	newnode->str = strdup(str);
	newnode->len = count;

	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
