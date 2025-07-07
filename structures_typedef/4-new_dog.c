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
 * create_string_copy - allocates and copies a string
 * @src: source string to copy
 *
 * Return: pointer to new string copy, or NULL if failed
 */
char *create_string_copy(char *src)
{
	char *copy;
	int len;

	if (src == NULL)
		return (NULL);

	len = _strlen(src);
	copy = malloc(len + 1);

	if (copy == NULL)
		return (NULL);

	_strcpy(copy, src);
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = create_string_copy(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->owner = create_string_copy(owner);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
