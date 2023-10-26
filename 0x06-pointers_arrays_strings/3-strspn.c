#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: A pointer to string input.
 * @accept: Substring prefix to look fo.
 *
 * Return: The number of bytes in the initial segment os s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
