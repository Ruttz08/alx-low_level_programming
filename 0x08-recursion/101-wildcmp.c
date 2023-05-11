#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string. it can have a * as a special character.
 * Return: 1 if they are identical, if not 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
