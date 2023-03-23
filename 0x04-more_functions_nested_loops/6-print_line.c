#include "main.h"

/**
 * print_line - draws a line in a straight line
 * followed by a new line.
 * @n: number of times the character '_'
 * should be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
