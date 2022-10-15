#include <stdio.h>
/**
 * main - Entry point
 * Description - print single digit combination of numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 4);
		if (i != 9)
		{
			putchar (',);
			putchar (' ');
			++i;
		}
	putchar('\n');
	return (0);
}
