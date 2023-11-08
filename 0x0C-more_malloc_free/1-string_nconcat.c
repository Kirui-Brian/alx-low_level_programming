#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Bytes of s2 included.
 *
 * Return: New concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, length;

	if (s1 == NULL)
		s1 = '';
	if (s2 == NULL)
		s2 = '';
	if (n >= strlen(s2))
		length = sizeof(s1) + sizeof(s2) + sizeof(char);
	else
		length = sizeof(s1) + sizeof(char) * n;
	s = malloc(length);

	if (s == NULL)
	{
		return (NULL)
	}
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	if (n >= strlen(s2))
		for (; i < strlen(s2); i++)
			s[i] = s2[i];
	else
		for (j = 0; j < n; j++)
		{
			s[i] = s2[j];
			i++;
		}
	s[i++] = '\0';
	return (s);
}
