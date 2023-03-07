#include "main.h"
#include <stddef.h>
/**
 * print_chessboard - function that prints the chessboard.
 * @a: an array input to be printed.
 *
 * Return: void (no return value).
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		j = 0;

		for (; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
