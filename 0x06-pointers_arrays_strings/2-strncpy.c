#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: second string
 * @n: byte used
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int te;

	te = 0;
	while (te < n && src[te] != '\0')
	{
		dest[te] = sr[te];
		te++;
	}
	while (te < n)
	{
		dest[te] = '\0';
		te++;
	}
	return (dest);
}
