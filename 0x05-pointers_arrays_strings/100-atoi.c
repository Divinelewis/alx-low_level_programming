#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: The pointer to convert
 * Return: An integer
 */

int _atoi(char *s)
{
	static int d;
	static long int num;
	int m;

	d = 2;
	num = 612852475143;
	while (d < num)
	{
		m = d;
		while (num % m == 0)
		{
			num = num / m;
		}
		d++;
	}
	printf("%ld\n", num);

	return (0);
}
