#include <stdio.h>
/**
 * main - printing the different sizes ran on the computer.
 * Return: 0 (shows that it is successful.
 */
int main(void)
{
	int i;
	double d;
	char c;
	printf("The size of an int is : %lu.\n",(unsigned long)sizeof(i));
	printf("The size of an double is : %lu.\n",(unsigned long)sizeof(d));
	printf("The size of an c is : %lu.\n",(unsigned long)sizeof(c));
	return (0);
}
