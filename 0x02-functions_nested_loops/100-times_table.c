#include "main.h"

/**
 * void print_times_table - Check desc.
 * Desc: a function that prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0 the function should not print anything.
 * Return nothing.
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0);
			for (j = 0; j <= n; j++)
				putformat(i * j);
			_putchar('\n');
		}
	}
}

/**
 * putformat - formatted characters to output
 * @n - number to format
 * Return nothing
 */
void putformat(int n)
{
	if (n <=9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
