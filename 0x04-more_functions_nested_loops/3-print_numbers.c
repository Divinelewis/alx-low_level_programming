#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * Return: success
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	_putchar('\n');
}
