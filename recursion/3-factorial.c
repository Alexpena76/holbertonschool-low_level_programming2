#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to calculate factorial of
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	/* Error case: negative numbers do not have factorials */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Recursive case: n! = n * (n-1)! */
	return (n * factorial(n - 1));
}
