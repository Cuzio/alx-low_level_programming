#include <stdio.h>
#include "main.h"

/**
 * isupper - if the letter is capital
 * @c: the variable to be used
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
