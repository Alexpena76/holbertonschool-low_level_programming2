#include "main.h"

/**
 * prime_helper - helper function to check divisibility recursively
 * @n: number to check for primality
 * @divisor: current divisor to test
 *
 * Return: 1 if prime, 0 if not prime
 */
int prime_helper(int n, int divisor)
{
	/* If divisor squared is greater than n, we have checked enough */
	if (divisor * divisor > n)
	{
		return (1);
	}

	/* If n is divisible by divisor, it is not prime */
	if (n % divisor == 0)
	{
		return (0);
	}

	/* Recursive case: check next divisor */
	return (prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - returns 1 if input integer is prime, 0 otherwise
 * @n: number to check for primality
 *
 * Return: 1 if n is prime, 0 if not prime
 */
int is_prime_number(int n)
{
	/* Numbers less than 2 are not prime */
	if (n < 2)
	{
		return (0);
	}

	/* 2 is the only even prime number */
	if (n == 2)
	{
		return (1);
	}

	/* Even numbers greater than 2 are not prime */
	if (n % 2 == 0)
	{
		return (0);
	}

	/* Start checking odd divisors from 3 */
	return (prime_helper(n, 3));
}
