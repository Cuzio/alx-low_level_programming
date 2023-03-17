#include <stdio.h>

/**
 * main - printing out all the letters of the alphabet.
 * Return: always 0
 */

int main(void)
{
	char ln;

	for (ln = 'a'; ln <= 'z'; ln++)
	{
		putchar(ln);
	}
	putchar('\n');
	return (0);
}
