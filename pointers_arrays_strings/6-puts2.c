#include "main.h"

void puts2(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i] && count < 50)
	{
		_putchar(str[i]);
		i += 2;
		count++;
	}
	_putchar(10);
}
