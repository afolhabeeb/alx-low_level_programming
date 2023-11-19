#include "lists.h"

/**
 * add_node - function adds element to the current node.
 *
 * @head: the pointer to the nodes.
 * @str: the string data of the node itself
 *
 * Return: the address of the new element and data.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	size_t i, count = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	newnode->len = count;
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
