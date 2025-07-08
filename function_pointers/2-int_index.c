#include "function_pointers.h"

/**
 * int_index - searches for an integer using a comparison function
 * @array: array of integers to search
 * @size: number of elements in the array
 * @cmp: pointer to comparison function
 *
 * Description: Searches through array using the provided comparison
 * function. Returns the index of the first element for which the
 * comparison function returns a non-zero value (true).
 *
 * Return: index of first matching element, or -1 if no match or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check for invalid input */
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	/* Search through array */
	for (i = 0; i < size; i++)
	{
		/* Call comparison function on current element */
		if (cmp(array[i]) != 0)
		{
			/* Found match - return index */
			return (i);
		}
	}

	/* No match found */
	return (-1);
}
