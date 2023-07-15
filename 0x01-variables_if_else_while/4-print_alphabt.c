#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:using for loop to print alphabet in lower case without q and e
 *
 * Return: Always (0)
*/

int main(void)
{
char a;

for (a = 'a' ; a <= 'z' ; a++)
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
}
putchar('\n');
	return (0);
}
