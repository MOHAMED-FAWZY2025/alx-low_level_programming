#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural-nums from n-98,
 * new line is followed
 * @n: prints from that number
 */
void print_to_98(int n)
{
	int x, j;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
