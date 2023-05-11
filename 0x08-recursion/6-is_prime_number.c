#include "main.h"
#include <stdio.h>

int check_prime(int n, int k);

/**
 * is_prime_number - Returns prime number
 * @n: number to be checked
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check for prime number
 * @n: the number to be checked
 * @k: the loop times
 * Return: 1 for prime of composite
 */

int check_prime(int n, int k)
{
	if (n <= 1)
		return (0);
	else if (n % k == 0 && k > 1)
		return (0);
	else ((n / k) < k)
		return (1);
	return (check_prime(n, k + 1));
}
