#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an arrey of integers
 * @min: starting int
 * @max: max int
 * Return: arrey of integers
 */
int *array_range(int min, int max)
{

	int len, i;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}
