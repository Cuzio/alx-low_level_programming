#include <stdio.h>

/**
 * main - printing lowercase alphabets except q and e.
 * Return: always 0
 */

int main(void)
{
	char ln;

	for (ln = 'a'; ln <= 'z'; ln++)
	{
		if (ln == 'q' || ln == 'e')
		{
			putchar(ln);
		}
	}
	putchar('\n');
	return (0);
}
