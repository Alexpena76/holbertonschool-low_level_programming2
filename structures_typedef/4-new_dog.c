#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Allocates memory for a new dog structure and
 * creates copies of the name and owner strings. Returns pointer
 * to the new dog or NULL if allocation fails.
 *
 * Return: pointer to new dog_t, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	/* Input validation */
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the dog structure */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for name copy */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/* Allocate memory for owner copy */
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Copy strings to allocated memory */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	/* Initialize the dog structure */
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
