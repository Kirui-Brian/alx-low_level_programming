#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: Starting memory address.
 * @b: Constant byte value.
 * @n: The number of bytes to be changed.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
