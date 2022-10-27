#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * to upper case
 * @str: The string to be changed.
 * Return: a pointer to the changed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[i])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
