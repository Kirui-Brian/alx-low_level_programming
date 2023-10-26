#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to reverse.
 *
 * Return: 1 if palindrome 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Return the length of a given string.
 * @s: The string to calculate its length.
 *
 * Return: The string length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Checks characters recursively for palindrome.
 *
 * @s: The string to perform check.
 * @i: The iterator.
 * @length: The length of the string.
 *
 * Return: 1 if palindrome 0 otherwise.
 */

int check_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_palindrome(s, i + 1, length - 1));
	}
