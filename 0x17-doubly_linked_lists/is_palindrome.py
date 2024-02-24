#!/usr/bin/python3
# Function to check if a number is palindrome
def is_palindrome(n):
    return str(n) == str(n)[::-1]

# Finding the largest palindrome made from the product of two 3-digit numbers
largest_palindrome = max(i * j for i in range(100, 1000) for j in range(100, 1000) if is_palindrome(i * j))

# Writing the result to the file without adding new lines or extra spaces
with open('102-result', 'w') as file:
    file.write(str(largest_palindrome))
