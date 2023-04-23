#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int i, k, q;

	for (i = '0'; i < '9'; i++)
	{
	for (k = i + 1; k <= '9'; k++)
	{
	for (q = k + 1; q <= '9'; q++)
	{
	if ((k != i) != q)
	{
	putchar(i);
	putchar(k);
	putchar(q);
	if (i == '7' && k == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
