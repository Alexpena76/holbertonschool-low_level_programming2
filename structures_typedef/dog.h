#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - represents a dog
 * @name: name of the dog
 * @age: age of the dog in years
 * @owner: owner of the dog
 *
 * Description: This structure stores information about a dog
 * including its name, age, and owner details.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 *
 * Description: New type name for struct dog, provides cleaner
 * syntax and easier code readability.
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
