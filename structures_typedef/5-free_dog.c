#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog structure
 * @d: pointer to dog structure to free
 *
 * Description: Frees all memory allocated for a dog structure,
 * including the structure itself and any strings it contains.
 * Safe to call with NULL pointer.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	/* Check if pointer is valid */
	if (d != NULL)
	{
		/* Free the name string if it exists */
		if (d->name != NULL)
		{
			free(d->name);
		}

		/* Free the owner string if it exists */
		if (d->owner != NULL)
		{
			free(d->owner);
		}

		/* Free the dog structure itself */
		free(d);
	}
}
