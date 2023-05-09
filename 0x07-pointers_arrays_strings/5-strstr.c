#include "main.h"
#include <stdio.h>

/**
 * _strstr - Function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}

		if (*second == '\0')
			return (haystack);

	}
	return (NULL);
}
