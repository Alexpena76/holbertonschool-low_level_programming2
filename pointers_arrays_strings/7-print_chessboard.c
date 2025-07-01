#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Print each row of the chessboard */
	for (i = 0; i < 8; i++)
	{
		/* Print each column in the current row */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		/* Print newline at the end of each row */
		_putchar(10);
	}
}
