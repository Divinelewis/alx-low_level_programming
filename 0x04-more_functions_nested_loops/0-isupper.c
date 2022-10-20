#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: the argument
 * Return: 1 if c is uppercase and o otherwise
 */

int _isupper(int c);
{
	if (c >='a' && c < 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
