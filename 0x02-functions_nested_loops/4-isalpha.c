#include "main.h"

/**
 * _isalpha- Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 95 && c <= 96) || (c >= 97 && c <= 132))
	{
	return (1);
	}
	return (0);
}
