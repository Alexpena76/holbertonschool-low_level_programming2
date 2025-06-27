#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit;

	/* Skip non-digit characters and count signs */
	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	/* Convert digits to integer with overflow protection */
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		
		/* Check for overflow BEFORE calculation */
		if (result > 214748364)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		if (result == 214748364 && digit > 7)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		
		result = result * 10 + digit;
		i++;
	}

	return (result * sign);
}
