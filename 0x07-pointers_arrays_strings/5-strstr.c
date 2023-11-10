#include "main.h"

/**
 * _strstr - A function that locates a substring.
 *
 * @haystack: Input string to search for matching substring.
 *
 * @needle: A substring to search for.
 *
 * Return: A pointer to the beginning of  the located
 *	substring or NULL if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	/**
	 * Initializing variables to aid in returning
	 * one of the params pointer haystack
	 */

	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
