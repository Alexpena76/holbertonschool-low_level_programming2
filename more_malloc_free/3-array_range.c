#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	/* Error case: min greater than max */
	if (min > max)
	{
		return (NULL);
	}

	/* Calculate array size */
	size = max - min + 1;

	/* Allocate memory for array */
	array = malloc(sizeof(int) * size);

	/* Check if malloc failed */
	if (array == NULL)
	{
		return (NULL);
	}

	/* Fill array with values from min to max */
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
