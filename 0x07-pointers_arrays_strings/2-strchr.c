#include "main.h"

/**
 * _strchr - A function that located a character in a string.
 * @s: The string.
 * @c: The character.
 *
 * Return: A pointer to the 1st occurrence in a string and Null otherwise.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
