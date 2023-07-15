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
int i;
char a;

for (i = 0 ; i < 10 ; i++)
putchar('0' + i);
for (a = 'a' ; a <= 'f' ; a++)
putchar(a);
putchar('\n');
	return (0);
}
