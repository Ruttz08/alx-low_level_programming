#include "main.h"
#include <stdio.h>

/**
 * _strpbr - Function that searches a string
 * @s: input
 * @accept: Byte string
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k, n;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[k] == accept[n])
				return (s + k);
		}
	}
	return (NULL);
}
