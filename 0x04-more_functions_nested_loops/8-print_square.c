#include "main.h"

/**
 * print_square - print a square using #'s
 * @size: the length of the square to print
 * Return: void
 */

void print_square(int size);
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
