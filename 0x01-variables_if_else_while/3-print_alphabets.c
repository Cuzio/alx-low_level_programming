#include <stdio.h>

/**
 * main - print lowercase and later uppercase letter.
 * Return: 0
 */

int main(void)
{
	char ln;

	for (ln = 'a'; ln <= 'z'; ln++)
	{
		putchar(ln);
	}
	for (ln = 'A'; ln <= 'Z'; ln++)
	{
		putchar(ln);
	}
	putchar('\n');
	return (0);
}
