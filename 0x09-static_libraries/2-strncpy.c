#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to servce input buffer
 * @n: bytes of *src
 *
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src arrey
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not
	 * be terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/**
	 * if the length of source is less than n
	 * write additional multbytes to dest to
	 * ensure that a total of n bytes is vritten
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

