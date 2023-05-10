#include "main.h"

/**
 * main - write the character c to stdout
 * @c: The character to print
 * @write: print
 * Return: Success 1.
 * On error, -1 is returned, and error is set appropriate
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
