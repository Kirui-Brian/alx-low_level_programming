#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @r: Integer value to be computed.
 *
 * Return: Absolute value of r.
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
