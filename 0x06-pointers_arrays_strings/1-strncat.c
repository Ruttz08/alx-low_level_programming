#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: first string
 * @src: second string
 * @n: byte to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int re;
	int te;

	re = 0;
	while (dest[re] != '\0')
	{
		re++;
	}
	te = 0;
	while (te < n && src[te] != '\0')
	{
	dest[re] = src[te];
	re++;
	te++;
	}
	dest[re] = '\0';
	return (dest);
}
