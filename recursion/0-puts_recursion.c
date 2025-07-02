#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* Base case: if we reach end of string */
	if (*s == 0)
	{
		_putchar(10);
		return;
	}
	
	/* Print current character */
	_putchar(*s);
	
	/* Recursive call with next character */
	_puts_recursion(s + 1);
}
