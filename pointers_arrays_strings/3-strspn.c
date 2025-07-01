#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing accepted characters
 *
 * Return: number of bytes in initial segment of s consisting only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found;

	/* Check each character in s */
	for (i = 0; s[i] != 0; i++)
	{
		found = 0;
		/* Check if current character is in accept */
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		/* If character not found in accept, stop counting */
		if (found == 0)
		{
			break;
		}
		count++;
	}

	return (count);
}
