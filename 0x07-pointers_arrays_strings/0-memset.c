#include "main.h"

/**
 * _memset - Functions entry point
 * @s: Destination for pointer
 * @b: Constant byte
 * @n: bytes
 * Return: 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
