#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - to print the reverse
 * @s: string to print
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
