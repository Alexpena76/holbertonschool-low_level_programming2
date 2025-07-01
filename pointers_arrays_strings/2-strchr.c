#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to find
 *
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	/* Search through string until character found or end reached */
	while (*s != 0)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	/* Check if c is the null terminator */
	if (*s == c)
	{
		return (s);
	}

	/* Character not found */
	return (0);
}
