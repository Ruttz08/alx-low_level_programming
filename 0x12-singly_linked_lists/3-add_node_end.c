#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the list.
 * @str: string to save in the list
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *exist_node;
	size_t x;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (x = 0; str[x]; x++)
		;
	n_node->len = x;
	n_node->next = NULL;
	exist_node = *head;
	if (exist_node == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (exist_node->next != NULL)
			exist_node = exist_node->next;
		exist_node->next = n_node;
	}
	return (*head);
}
