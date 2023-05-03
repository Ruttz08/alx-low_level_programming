#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: the string to be used
 * Return: void
 */

void puts_half(char *str)
{
	int j = 0;
	int y;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		y = (j - 1) / 2;
		y += 1;
	}
	else
	{
		y = j / 2;
	}

	for (; y < j; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
