#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers to iterate over
 * @size: size of the array (number of elements)
 * @action: pointer to function to execute on each element
 *
 * Description: Applies the given function to each element of the array.
 * The function pointed to by action is called once for each array element,
 * receiving the element value as its parameter.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Check if array and action are valid */
	if (array != NULL && action != NULL)
	{
		/* Iterate through each element of the array */
		for (i = 0; i < size; i++)
		{
			/* Call the action function with current array element */
			action(array[i]);
		}
	}
}
