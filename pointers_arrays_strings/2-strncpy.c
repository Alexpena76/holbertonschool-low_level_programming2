#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest, up to n characters */
	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}

	/* Fill remaining space with null bytes if src is shorter than n */
	for (; i < n; i++)
	{
		dest[i] = 0;
	}

	return (dest);
}
