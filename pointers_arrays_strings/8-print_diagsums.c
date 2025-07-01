#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;  /* Sum of main diagonal */
	int sum2 = 0;  /* Sum of anti-diagonal */
	int i;

	/* Calculate both diagonal sums */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];           /* Main diagonal */
		sum2 += a[i * size + (size - 1 - i)]; /* Anti-diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
