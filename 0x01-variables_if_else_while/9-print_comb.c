#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for loop to print numbers of base 16
 *
 * Return: Always (0)
*/

int main(void)
{
int a;

for (a = 0 ; a <=  9 ; a++)
{
putchar('0' + a);
if (a != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
	return (0);
}
