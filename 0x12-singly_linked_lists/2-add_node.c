#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node- function that adds a new node at the beginning
 * @head: The linked list
 * @str: The string to add to the node
 * Return: The address of the new list or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
