#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	/* Find the length of the string */
	while (str[length] != 0)
	{
		length++;
	}

	/* Calculate starting position */
	if (length % 2 == 0)
	{
		/* Even: print second half */
		start = length / 2;
	}
	else
	{
		/* Odd: start from (length + 1) / 2 */
		start = (length + 1) / 2;
	}

	/* Print from starting position to end */
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
