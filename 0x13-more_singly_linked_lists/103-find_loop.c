#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop -function that finds the loop in a linked list.
 * @head: pointer to the head of the linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *init = head;
	listint_t *end = head;

	if (!head)
		return (NULL);

	while (init && end && end->next)
	{
		end = end->next->next;
		init = init->next;
		if (end == init)
		{
			init = head;
			while (init != end)
			{
				init = init->next;
				end = end->next;
			}
			return (end);
		}
	}
	return (NULL);
}
