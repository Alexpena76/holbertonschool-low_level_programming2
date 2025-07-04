#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculate length of string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate memory for duplicate (length + 1 for null terminator) */
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* Copy each character from original to duplicate */
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
