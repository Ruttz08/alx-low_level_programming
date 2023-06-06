#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of linked list
 * Return: head node’s data (n) and if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
