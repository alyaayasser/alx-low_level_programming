#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put the constsnt
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}

