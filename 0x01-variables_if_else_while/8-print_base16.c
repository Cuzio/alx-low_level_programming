#include <stdio.h>

/**
 * main - the numbers of base 16 in lowercase, followed by a new line.
 * Return: always 0
 */

int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; 10++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}

