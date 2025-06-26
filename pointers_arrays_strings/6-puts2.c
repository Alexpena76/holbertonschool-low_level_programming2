#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	if (str == 0)
		return;

	for (i = 0; str[i] != 0; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
