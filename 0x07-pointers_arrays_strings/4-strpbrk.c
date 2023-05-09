#include <stdio.h>
#include "main.h"

/**
 * _strpbrk- Entry point
 * @s: Input
 * @accept: input
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k, n;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (n = 0; accept[k] != '\0'; k++)
		{
			if (s[k] == accept[n])
				return (s + k);
		}
	}
	return (NULL);
}
