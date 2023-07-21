#include "main.h"

/**
 * _isupper - function that checks if the character is
 *	uppercase or not
 *
 *@c: takes integer input
 *
 * Return: 1 if the character is uppercase
 *	,0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
