#include "main.h"

/**
 * print_rev - lmprlne an reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longl = 0;
	int o;

	while (*s != '\0')
	{
		longl++;
		s++;
	}
	s--;
	for (o = longl; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
