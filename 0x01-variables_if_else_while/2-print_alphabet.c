#include <stdio.h>

/**
 * main - printing out all the letters of the alphabet.
 * Return: always 0
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar("\n");
	return (0);
}
