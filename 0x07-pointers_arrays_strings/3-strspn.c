#include "main.h"
#include <stdio.h>

/**
 * _strspn -  Functions of the length of prefix substring
 * @s: byte
 * @accept: given point
 * Return: 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, n, value, check;

	value = 0;

	for (k = 0; s[k] != '\0';  k++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[k])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (value);
		}
	}
	return (n);
}
