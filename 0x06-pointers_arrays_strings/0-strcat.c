#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: 0 Success
 */

char *_strcat(char *dest, char *src)
{
	int re;
	int te;

	re = 0;
	while (dest[re] != '\0')
	{
		re++;
	}
	te = 0;
	while (src[te] != '\0')
	{
		dest[re] = src[te];
		re++;
		te++;
	}

	dest[re] = '\0';
	return (dest);
}
