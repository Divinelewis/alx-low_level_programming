#include <stdio.h>
#include <unistd.h>
/**
 * main - prints to string
 * Description: Prints a line to stdout
 * Return: 1 if successful
 */
int main(void)
{
	write(2, "
and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}