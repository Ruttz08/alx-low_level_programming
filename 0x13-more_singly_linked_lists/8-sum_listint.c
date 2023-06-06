#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n)
 *              of a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: sum of linked list, if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next
	}

	return (sum);
}
