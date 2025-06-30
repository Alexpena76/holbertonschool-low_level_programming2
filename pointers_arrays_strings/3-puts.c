#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	/* Print each character until null terminator is reached */
	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}

	/* Print new line at the end */
	_putchar(10);
}
