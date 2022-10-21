#include "main.h"

/**
 * print_line - print a line on the terminal
 * @n: the number of underscores
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
