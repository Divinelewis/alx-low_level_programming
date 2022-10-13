#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: printing sizes
 *
 * Return: Always 0 (Success) 
 */

int main(void) 
{
	char c;	
	int i;
	long int l;
	long long int y;
	float f;
	
	printf("size of char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of long int: %d byte(s)\n", sizeof(l));
	printf("size of a long long int: %d byte(s)\n", sizeof(y));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
