#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _pow_recursion - function that returns the value of x ** y
 * @x: first integer
 * @y: second integer
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
