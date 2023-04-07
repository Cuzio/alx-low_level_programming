#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints the number of arguments passed into it
 * @argc: the number of things entered
 * @argv: the array of things entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
