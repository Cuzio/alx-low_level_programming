#include "main.h"

/**
 * _isdigit - check the digits from 0 t0 9
 * @c: int to be checked
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
