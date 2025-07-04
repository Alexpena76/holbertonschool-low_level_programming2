#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, or NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, total_len;

	/* Check for invalid input */
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calculate total length needed */
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++;  /* Add 1 for '\n' after each argument */
	}
	total_len++;  /* Add 1 for final '\0' */

	/* Allocate memory for the new string */
	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
	{
		return (NULL);
	}

	/* Copy arguments to new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
