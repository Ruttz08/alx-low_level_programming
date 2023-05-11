#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: string
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else 
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - Comparator each character of the string.
 * @s: string 
 * @l: smallest iterator
 * @v: biggest iterator.
 * Return: .
 */

int comparator(char *s, int l, int v)
{
	if (*(s + l) == *(s + v))
	{
		if (l == v || l == v + 1)
			return (1);
		return (0 + comparator(s, l + 1, v - 1));
	}
	return (0);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
