#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * Return: success
 */

void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
