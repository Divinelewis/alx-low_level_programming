#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * Return: success
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	_putchar('\n');
}
