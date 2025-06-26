#include "main.h"
void puts2(char *str)
{
int i=0,count=0;
while(str[i]&&count<112)
_putchar(str[i]),i+=2,count++;
_putchar(10);
}
