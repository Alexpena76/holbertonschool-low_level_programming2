#include "main.h"

static int called = 0;

void puts2(char *str)
{
	int i = 0;
	
	if (called)
		return;
	called = 1;
	
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
