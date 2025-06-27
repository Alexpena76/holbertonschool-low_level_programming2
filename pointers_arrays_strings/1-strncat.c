#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of dest string */
	while (dest[dest_len] != 0)
	{
		dest_len++;
	}

	/* Append at most n characters from src to dest */
	while (i < n && src[i] != 0)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add null terminator */
	dest[dest_len + i] = 0;

	return (dest);
}
