#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    unsigned int word_count = 0;
    char *ptr = str;

    // Count the number of words in the input string
    while (*ptr != '\0')
    {
        if (*ptr == ' ')
        {
            ptr++;
            continue;
        }
        while (*ptr != ' ' && *ptr != '\0')
            ptr++;
        word_count++;
    }

    // Allocate memory for the array of strings
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    unsigned int word_index = 0;
    char *word = strtok(str, " ");

    // Split the input string into words and store them in the array
    while (word != NULL)
    {
        words[word_index] = strdup(word);
        if (words[word_index] == NULL)
        {
            // Free previously allocated memory and return NULL on failure
            for (unsigned int i = 0; i < word_index; i++)
                free(words[i]);
            free(words);
            return NULL;
        }
        word_index++;
        word = strtok(NULL, " ");
    }

    // Set the last element of the array to NULL
    words[word_index] = NULL;

    return words;
}
