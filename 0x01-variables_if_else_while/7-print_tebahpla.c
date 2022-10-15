#include <stdio.h>
/**
 * main - Entry point
 * Description - prints A to Z in reverse 
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch  = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');
	return (0);
}
