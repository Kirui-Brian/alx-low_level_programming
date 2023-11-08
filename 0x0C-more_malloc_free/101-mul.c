#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string is composed of digits
 * @str: The input string
 * Return: 1 if composed of digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiply two positive numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len_result = 0;
	int *result;
	int i, j, carry, digit;
	
	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;
	
	len_result = len1 + len2;
	result = calloc(len_result, sizeof(int));
	
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = digit / 10;
			result[i + j + 1] = digit % 10;
		}
		result[i + j + 1] = carry;
	}
	
	for (i = 0; i < len_result; i++)
	{
		if (i == 0 && result[i] == 0)
			continue;
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	
	multiply(argv[1], argv[2]);
	return (0);
}
