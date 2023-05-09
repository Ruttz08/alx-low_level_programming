#include "main.h"
#include <stdio.h>

/**
 * strchr - Functions that locate a char in a string
 * @s: Entry value
 * @c: Entry value
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (NULL);
}
