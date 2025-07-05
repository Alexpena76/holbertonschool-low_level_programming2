#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated space in memory containing s1,
 *         followed by first n bytes of s2, null terminated
 *         NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i, j;

	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	/* Calculate length of s2 */
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* If n >= length of s2, use entire s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for result string */
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);

	/* Copy s1 to result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy first n bytes of s2 to result */
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	/* Null terminate the result */
	result[i + j] = '\0';

	return (result);
}
