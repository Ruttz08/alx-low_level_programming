#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: pointer list
 * Return: The number of elements of a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
