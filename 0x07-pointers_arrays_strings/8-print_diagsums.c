#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print sum of two diagonals of a square matrix.
 * @a: Enter value
 * @size: Enter value
 * Return: 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int k, n, sum1 = 0, sum2 = 0;

	for (k = 0; k <= (size * size); k = k + size + 1)
		sum1 = sum1 + a[k];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
