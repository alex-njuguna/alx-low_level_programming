#include "main.h"

/**
 * is_palindrome_helper - checks if a string is a palindrome
 * @s: test par
 * @start: where to start
 * @end: where to end the check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
int result;

if (start >= end)
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
result = is_palindrome_helper(s, start + 1, end - 1);
return (result);
}
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: test par
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int y, len = 0;

while (s[len] != '\0')
{
len++;
}
y = is_palindrome_helper(s, 0, len - 1);
return (y);
}
