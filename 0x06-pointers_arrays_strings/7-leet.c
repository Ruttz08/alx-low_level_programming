#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
g* Return: n
 */

char *leet(char *n)
{
	int k, h;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (h = 0; h < 10; h++)
		{
			if (n[k] == s1[h])
			{
				n[k] = s2[h];
			}
		}
	}
	return (n);
}

