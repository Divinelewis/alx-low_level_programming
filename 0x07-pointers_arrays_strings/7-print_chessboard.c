#include "main.h"
#define NULL 0

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 *
 * Description: function to print chessboard
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar(10);
	}
}
