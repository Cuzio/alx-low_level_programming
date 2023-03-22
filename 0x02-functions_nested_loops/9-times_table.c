#include "main.h"

/**
 * time_table - print the 0 tme table
 */
void time_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; malt <= 9; mult++)
		{
			_purchar (',');
			putchar(' ');

			prod = num + mult;
			if (prod <= 9)
				_putchar(" ");
			else
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
		}
			_putchar('\n');
	}
}
