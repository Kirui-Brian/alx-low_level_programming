#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions"

/**
 * print_strings - Prints strings, separated by a specified separator.
 * @separator: String to be printed between strings.
 * @n: Number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
