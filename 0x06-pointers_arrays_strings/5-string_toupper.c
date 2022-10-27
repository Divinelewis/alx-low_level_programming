#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * to upper case
 * @str: The string to be changed.
 * Return: a pointer to the changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}

	return (str);
}
