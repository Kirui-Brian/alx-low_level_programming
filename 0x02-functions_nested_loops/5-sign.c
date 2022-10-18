#include "main.h"

/**
 * int print_sign - Check desc
 * Desc: function that prints the sign of a number
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
