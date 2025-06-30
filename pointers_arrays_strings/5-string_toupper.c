#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Iterate through each character in the string */
	while (str[i] != 0)
	{
		/* Check if character is lowercase */
		if (str[i] >= 97 && str[i] <= 122)
		{
			/* Convert to uppercase by subtracting 32 */
			str[i] = str[i] - 32;
		}
		i++;
	}

	/* Return pointer to the modified string */
	return (str);
}
