#ifndef DOG_H
#define DOG_H

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

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
