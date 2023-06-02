#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: head of the list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *exist_node;

	while ((exist_node = head) != NULL)
	{
		head = head->next;
		free(exist_node->str);
		free(exist_node);
	}
}
