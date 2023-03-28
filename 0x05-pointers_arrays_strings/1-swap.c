#include "main.h"


/**
 * main - function that swaps value
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*b = c;
	*a = d;
}
