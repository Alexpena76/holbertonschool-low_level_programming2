#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* Initialize the va_list */
	va_start(args, n);

	/* Print all the numbers */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		/* Print separator if not NULL and not the last number */
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
