#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;  /* First character should be capitalized */

	/* Iterate through each character in the string */
	while (str[i] != 0)
	{
		/* Check if current character is a separator */
		if (str[i] == 32 || str[i] == 9 || str[i] == 10 ||
		    str[i] == 44 || str[i] == 59 || str[i] == 46 ||
		    str[i] == 33 || str[i] == 63 || str[i] == 34 ||
		    str[i] == 40 || str[i] == 41 || str[i] == 123 ||
		    str[i] == 125)
		{
			capitalize_next = 1;  /* Next letter should be capitalized */
		}
		/* If current character is lowercase and should be capitalized */
		else if (str[i] >= 97 && str[i] <= 122 && capitalize_next == 1)
		{
			str[i] = str[i] - 32;  /* Convert to uppercase */
			capitalize_next = 0;   /* Do not capitalize next character */
		}
		/* Any other character (uppercase, digit, symbol) */
		else
		{
			capitalize_next = 0;   /* Do not capitalize next character */
		}

		i++;
	}

	return (str);
}
