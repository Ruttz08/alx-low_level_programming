#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int k;
	unsigned int w, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			e = argv[k];

			for (w = 0; w < strlen(e); w++)
			{
				if (e[w] < 48 || e[w] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
