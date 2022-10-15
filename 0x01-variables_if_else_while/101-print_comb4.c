#include <stdio.h>
/**
 * main - Entry point
 * Description - prints numbers of base 10 from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, m, l;

	for (n = 0; n < 9; n++)
	{
		for (m = 0; m < 9; m++)
		{
			for (l = 0; l < 9; l++)
			{
				if (n < m && m < l)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (l != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
