#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the console
 * @n: number of times the line is to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
