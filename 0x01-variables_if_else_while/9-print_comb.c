#include <stdio.h>
/**
 * main - Entry point
 * Description - print single digit combination of numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
