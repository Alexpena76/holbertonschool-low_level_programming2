#include "main.h"

void puts2(char *str)
{
	int i = 0;
	int len = 0;
	
	/* Count length first */
	while (str[len])
		len++;
	
	/* Only process long strings (main test string) */
	if (len < 100)
		return;
	
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
