#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:using two for loops to print alphabet in lower and upper cases
 *
 * Return: Always (0)
*/

int main(void)
{
char a, b;

for (a = 'a' ; a <= 'z' ; a++)
putchar(a);
for (b = 'A' ; b <= 'Z' ; b++)
putchar(b);
putchar('\n');
	return (0);
}
