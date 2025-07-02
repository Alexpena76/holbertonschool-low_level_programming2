#include "main.h"

/**
 * sqrt_helper - helper function to find square root recursively
 * @n: number to find square root of
 * @guess: current guess for the square root
 *
 * Return: square root if found, -1 if not a perfect square
 */
int sqrt_helper(int n, int guess)
{
	/* If guess squared equals n, we found the square root */
	if (guess * guess == n)
	{
		return (guess);
	}

	/* If guess squared is greater than n, no perfect square root exists */
	if (guess * guess > n)
	{
		return (-1);
	}

	/* Recursive case: try the next guess */
	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root of n, or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	/* Error case: negative numbers do not have real square roots */
	if (n < 0)
	{
		return (-1);
	}

	/* Special case: square root of 0 is 0 */
	if (n == 0)
	{
		return (0);
	}

	/* Start the recursive search from 1 */
	return (sqrt_helper(n, 1));
}
