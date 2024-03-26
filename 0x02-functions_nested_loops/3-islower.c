#include "main.h"

/**
 * _islower - Check desc.
 * @c: The character to be checked.
 * Desc: function that checks for lowercase character
 * Return: 1 if lowercase & 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
