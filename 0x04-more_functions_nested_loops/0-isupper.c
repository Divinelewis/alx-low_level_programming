#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * @c: the argument
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c);
{
	printf("Please enter your alpabet\n");
	scanf("%d", &c);
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}