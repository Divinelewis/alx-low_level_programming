#include "main.h"

/**
 * swap_int -> given two integers swap the values they are holding
 * @a: pointer 1
 * @b: pointer 2
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
