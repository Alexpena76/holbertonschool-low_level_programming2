#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory set to zero,
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *char_ptr;
	unsigned int total_size, i;

	/* Check for invalid parameters */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total size needed */
	total_size = nmemb * size;

	/* Check for multiplication overflow */
	if (total_size / nmemb != size)
		return (NULL);

	/* Allocate memory */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to zero */
	char_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
