#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
