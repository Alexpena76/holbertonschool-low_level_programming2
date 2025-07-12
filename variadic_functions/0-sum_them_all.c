#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to sum
 * @...: variable number of parameters to sum
 *
 * Return: sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	/* If n is 0, return 0 */
	if (n == 0)
	{
		return (0);
	}

	/* Initialize the va_list */
	va_start(args, n);

	/* Sum all the arguments */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	/* Clean up the va_list */
	va_end(args);

	return (sum);
}
