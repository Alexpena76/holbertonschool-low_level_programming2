#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates length of a string
 * @str: string to measure
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL || src == NULL)
		return (NULL);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

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
	int name_len, owner_len;

	/* Input validation */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Calculate string lengths manually */
	name_len = _strlen(name);
	owner_len = _strlen(owner);

	/* Allocate memory for the dog structure */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory for name copy */
	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/* Allocate memory for owner copy */
	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Copy strings to allocated memory */
	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	/* Initialize the dog structure */
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
