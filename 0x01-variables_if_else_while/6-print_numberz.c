#include <stdio.h>

/**
 * main - print all single digits from 0 in base 10.
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
