#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array
 * @c: The char to fill in the array
 *
 * Return: The array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *w;

	if (size == 0)
		return (NULL);
	w = malloc(size * sizeof(char));

	if (w == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
	{
		w[k] = c;
	}
	return (w);
}
