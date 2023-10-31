#include <stdlib.h>
#include "main.h"

/**
 * count_word - sub-function to count the No. of words in a string
 * @s: string to evaluate
 *
 * Return: Number of words
 */
int count_word(char *s)
{
	int werd, count, words;

	werd = 0;
	words = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			werd = 0;
		else if (werd == 0)
		{
			werd = 1;
			words++;
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: Pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
	char **wording, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	wording = (char **)malloc(sizeof(char *) * (words + 1));
	if (wording == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				wording[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	wording[k] = NULL;

	return (wording);
}
