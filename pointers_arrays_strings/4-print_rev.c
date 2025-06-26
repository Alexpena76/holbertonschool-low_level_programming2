#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* First, find the length of the string */
	while (s[length] != 0)
	{
		length++;
	}

	/* Print characters from last to first */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* Print newline at the end */
	_putchar(10);
}
