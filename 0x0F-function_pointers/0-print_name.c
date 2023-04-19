#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function name
 * @name: name of the varible
 * @f: name of variable
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	printf("Hello my name is %s\n", name);
}

int main(void)
{
	void (*ptr)(char *);

	ptr = print_name;
	ptr("Bob");
}
