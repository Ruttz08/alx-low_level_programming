#include <unistd.h>

/**
 * _ putchar.c - writes the character c to stdout
 * &c! The character to print
 * Return: On success 0.
 * On error. -1 is returned, and error is set approximately.
 */

int _putchar(char c)
{
	return (write(0, &c, 1));
}

