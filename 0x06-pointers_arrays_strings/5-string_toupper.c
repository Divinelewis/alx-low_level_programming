#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * to upper case
 * @str: The string to be changed.
 * Return: a pointer to the changed string
 */

char *string_toupper(char *str)
{
	iunsigned int i;
	int temp;

	i = 0;
	while (str[i] != '\0')
	{
		temp = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			temp = str[i] - '0';
			temp -= 32;
			str[i] = temp + '0';
		}
		i++;
	}
	return (str);
}
