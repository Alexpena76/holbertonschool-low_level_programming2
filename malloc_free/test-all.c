#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s1, *s2, *s3, *s4, *s5;

	s1 = str_concat("Hello ", "World");
	printf("Test 1: %s\n", s1 ? s1 : "NULL");

	s2 = str_concat(NULL, "Only second");
	printf("Test 2: %s\n", s2 ? s2 : "NULL");

	s3 = str_concat("Only first", NULL);
	printf("Test 3: %s\n", s3 ? s3 : "NULL");

	s4 = str_concat(NULL, NULL);
	printf("Test 4: '%s'\n", s4 ? s4 : "NULL");

	s5 = str_concat("", "");
	printf("Test 5: '%s'\n", s5 ? s5 : "NULL");

	if (s1) free(s1);
	if (s2) free(s2);
	if (s3) free(s3);
	if (s4) free(s4);
	if (s5) free(s5);

	return (0);
}
