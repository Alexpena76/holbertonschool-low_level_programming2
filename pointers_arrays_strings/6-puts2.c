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

	/* Handle null pointer */
	if (str == 0)
		return;

	/* Print every other character starting from index 0 */
	for (i = 0; str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
