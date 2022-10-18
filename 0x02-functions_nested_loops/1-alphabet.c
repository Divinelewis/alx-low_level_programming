#include "main.h"
/**
 * main - Entry point
 * Description: print the alphabet in lower case
 * Return: return void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
