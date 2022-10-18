#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: the integer value it receives
 * Return: (0) if successful
 */

int _islower(int c)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (c == m)
		{
			return (1);
		}
	}
	return (0);
}
