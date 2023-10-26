#include "main.h"

/**
 * is_prime_number - A function to tell prime & non prime numbers.
 * @n: The number to evaluate.
 *
 * Return: 1 if prime 0 otherwise.
 */

int is_prime_number(int n)
{
	if  (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - Evaluated recursively if a number is prime.
 * @n: The number to evaluate.
 * @i: The iterator.
 *
 * Return: 1 if prime 0 otherwise.
 */

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number(n, i - 1));
}
