#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Base case: if we reach end of string */
	if (*s == 0)
	{
		return;
	}
	
	/* Recursive call with next character */
	_print_rev_recursion(s + 1);
	
	/* Print current character AFTER recursive call returns */
	_putchar(*s);
}
