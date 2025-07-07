#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: Prints all elements of struct dog. If an element
 * is NULL, prints (nil) instead. If d is NULL, prints nothing.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	/* If pointer is NULL, print nothing */
	if (d == NULL)
	{
		return;
	}

	/* Print name with NULL check */
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

	/* Print age (float cannot be NULL) */
	printf("Age: %f\n", d->age);

	/* Print owner with NULL check */
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
