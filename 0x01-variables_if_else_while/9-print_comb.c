#include <stdio.h>
/**
 * main - Entry point
 * Description - print single digit combination of numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
