#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s that matches one of the bytes is accept
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		k++;
	}
	return ('\0');
}
