#include <stdio.h>
/**
 * main - Entry point
 * Description - prints numbers of base 10 from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%i", i);
		++i;
	}
	print('\n');
	return (0);
}