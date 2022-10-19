#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an argument tk be given
 * Return: integer
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
