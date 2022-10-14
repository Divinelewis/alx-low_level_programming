#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * putchar - to write string to the alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');
	
	return (0);
}
