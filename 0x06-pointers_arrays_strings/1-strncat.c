#include "main.h"

/**
 * _strncat - consatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	/*find the size of dest arrey*/
	while (dest[i])
	{
		i++;
	}
	/**
	 * src does not need to be null torminated
	 * if it contains n or nore bytes
	 */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
		/*null terminate dest*/
	}
	dest[i + j] = '\0';
	return (dest);
}
