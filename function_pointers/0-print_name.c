#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: pointer to function that prints the name
 *
 * Description: Takes a name and a function pointer, then calls
 * the function pointed to by f with name as argument. This allows
 * different ways of printing the same name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check if both parameters are valid */
	if (name != NULL && f != NULL)
	{
		/* Call the function pointed to by f with name as argument */
		f(name);
	}
}
