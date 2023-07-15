#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using putchar to print numbers from 0 to 9
 *
 * Return: Always (0)
*/

int main(void)
{
int a;

for (a = 0 ; a < 10 ; a++)
putchar('0' + a);
putchar('\n');
	return (0);
}
