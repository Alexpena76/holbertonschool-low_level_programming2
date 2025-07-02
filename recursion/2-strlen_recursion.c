#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: if we reach end of string */
	if (*s == 0)
	{
		return (0);
	}

	/* Recursive case: 1 + length of remaining string */
	return (1 + _strlen_recursion(s + 1));
}
