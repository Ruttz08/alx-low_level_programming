#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers
 * @n: Element to get its array 
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;
	
	for (k = 0; k < n; k++)
	{
	printf("%d", a[k]);
	if (k != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
