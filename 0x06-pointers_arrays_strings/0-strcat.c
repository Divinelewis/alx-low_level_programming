#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: a pointer to a char
 */

char *_strcat(char *dest, char *src);
{
	int len;
	int len2;

	for (len = 0; dest[len]; len++)
	{
		for (len2 = 0; src[len2]; len2++)
		{
			dest[len] = src[len2];
			len++;
		}
	}
	return (dest);
}
