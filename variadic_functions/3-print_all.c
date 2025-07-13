#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	/* First loop to iterate through format string */
	while (format && format[i])
	{
		printf("%s", separator);

		/* Check each format character */
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			if (str != NULL)
			{
				printf("%s", str);
			}
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
