#include "main.h"

/**
 * _isdigit - function that checks if the character is
 *		a digit or not
 *
 *@c: takes integer input
 *
 *Return: 1 if c is a digit
 *	0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
