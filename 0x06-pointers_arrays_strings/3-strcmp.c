#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first parameter
 * @s2: the sceond parameter
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int y;

	for (y = 0; s1[y] != '\0'  ||  s2[y] != '\0'; y++)
	{
		if (s1[y] != s2[y])
			return (s1[y] - s2[y]);
	}
	return (0);
}
