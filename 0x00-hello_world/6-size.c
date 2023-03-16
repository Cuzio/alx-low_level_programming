#include <stdio.h>
/**
 * main - printing the different sizes ran on the computer.
 * Return: 0 (shows that it is successful.)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char is : %i byte(s)\n", sizeof(a));
	printf("Size of an int is : %i byte(s)\n", sizeof(b));
	printf("Size of a long int is : %i byte(s)\n", sizeof(c));
	printf("Size of a long long int is : %i byte(s)\n", sizeof(d));
	printf("Size of a float is : %lu byte(s).\n", sizeof(f));
	return (0);
}
