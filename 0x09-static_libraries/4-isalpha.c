#include "main.h"

/**
 * _isalpha - chevks for alphabetic characteds
 * @c: the argument
 * Return: 0 if successful
 */

int _isalpha(int c)
{
	if (c >= 'a' && c < 'z')
	{
		return (1);
	} else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
