#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int target = 2772;
	char password[100];
	int i = 0;
	int random_char;

	/* Seed the random number generator */
	srand(time(NULL));

	/* Generate random characters until we reach the target sum */
	while (sum < target)
	{
		/* Generate a random printable ASCII character (33-126) */
		random_char = rand() % 94 + 33;
		
		/* If adding this character would exceed target, adjust it */
		if (sum + random_char > target)
		{
			random_char = target - sum;
		}
		
		password[i] = random_char;
		sum += random_char;
		i++;
	}
	
	/* Null terminate the password */
	password[i] = 0;
	
	/* Print the password */
	printf("%s", password);
	
	return (0);
}
