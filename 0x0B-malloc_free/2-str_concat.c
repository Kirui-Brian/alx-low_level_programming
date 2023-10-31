#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    unsigned int len_s1 = 0, len_s2 = 0;
    unsigned int i, j;

    // Handle cases where s1 or s2 is NULL by treating them as empty strings
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    // Calculate the lengths of s1 and s2
    while (s1[len_s1] != '\0')
        len_s1++;
    while (s2[len_s2] != '\0')
        len_s2++;

    // Allocate memory for the concatenated string
    concatenated = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

    if (concatenated == NULL)
        return NULL;

    // Copy the characters from s1 to the concatenated string
    for (i = 0; i < len_s1; i++)
        concatenated[i] = s1[i];

    // Copy the characters from s2 to the concatenated string
    for (j = 0; j < len_s2; j++)
        concatenated[i + j] = s2[j];

    // Add the null-terminator to the end of the concatenated string
    concatenated[len_s1 + len_s2] = '\0';

    return (concatenated);
}

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = str_concat(s1, s2);

    if (result != NULL)
    {
        printf("Concatenated: %s\n", result);
        free(result); // Don't forget to free the memory when you're done with the result.
    }
    else
    {
        printf("Concatenation failed due to insufficient memory.\n");
    }

    return (0);
}

