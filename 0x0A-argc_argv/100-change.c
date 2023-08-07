#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coincs
 * to make change for an amount of money.
 * @argc: number of commandline arguments.
 * @argv: pointer to an arrey of command line arguments.
 * Return: 0-success, non-zero-fail.
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, l = 0, money = _atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= c[i])
			{
				l += money / c[i];
				money = money % c[i];
				if (money % c[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
