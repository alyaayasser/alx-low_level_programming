#include <stdio.h>
#include "main.h"

/**
 * main - it all starts here
 * @argc: the number of argument
 * @argv: arrey of pointer to argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
 	char *c;

	while (--argc)
	{
		for (c = argc[argv]; *c; c++)
                        if (*c < '0' || *c > '9')
		      return (printf("Error\n"), 1);
		sum += _atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

