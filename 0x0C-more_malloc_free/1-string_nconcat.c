#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to 2nd string
 * @n: number of bytes from n2 to concatenates
 *
 * Return: pointer to space in memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, l1, l2;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the length of the strings*/

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	/*memory reservation-for case 1 & 2*/
	str = malloc(l1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second string into str*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
