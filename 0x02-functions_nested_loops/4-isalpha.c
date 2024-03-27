#include "main.h"

/**
 * _isalpha - Function that checks if a character is alphabetic..
 * @c: The character to be checked.
 * Return 1 if c is a letter, lowercase or uppercase
 * Return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && 'Z'))
		return (1);
	else
		return (0);
}
