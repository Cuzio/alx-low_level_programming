#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints its name
 * @argc: the number of things entered
 * @argv: the array that holds the string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
