#include "main.h"

/**
 * print_diagonal - function that prints diagonal line if n is positive
 *		and '\n' otherwise
 *@n: takes integer input
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
