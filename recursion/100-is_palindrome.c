#include "main.h"

/**
 * string_length - calculates the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 */
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + string_length(s + 1));
}

/**
 * palindrome_helper - helper function to check palindrome recursively
 * @s: string to check
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_helper(char *s, int start, int end)
{
	/* Base case: if start >= end, we have checked all pairs */
	if (start >= end)
	{
		return (1);
	}

	/* If characters do not match, it is not a palindrome */
	if (s[start] != s[end])
	{
		return (0);
	}

	/* Recursive case: check next pair moving inward */
	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not
 * @s: string to check
 *
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	/* Empty string is a palindrome */
	if (*s == '\0')
	{
		return (1);
	}

	/* Get the length of the string */
	len = string_length(s);

	/* Start checking from both ends */
	return (palindrome_helper(s, 0, len - 1));
}
