#include "main.h"

/**
 * isalpha - Check desc
 * Desc: function that checks for alphabetic character
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower = 'z'; lower++)
	{
		for (upper = 'A'; upper = 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
