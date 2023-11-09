#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters.
 *
 * Return: Sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < 0; i++)
	{
		sum += va_args(args, int);
	}
	va_end(args);

	return (sum);
}
