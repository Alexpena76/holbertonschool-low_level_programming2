#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* Initialize the va_list */
	va_start(args, n);

	/* Print all the strings */
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		/* If string is NULL, print (nil) */
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		/* Print separator if not NULL and not the last string */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* Clean up the va_list */
	va_end(args);

	/* Print newline at the end */
	printf("\n");
}
