#include "main.h"

/**
 * print_last_digit - Check description
 * Description: a function that prints the last digit of a number
 * Returns the value of the last digit
 */
int print_last_digit(int)
{
	int n, r;
	
	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return n % 10;
}
