#include "main.h"

/**
 * print_rev - Returns the length of a string
 * @s: string to be printed in reverse
 *
 * Return: The numerical length of the string
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
