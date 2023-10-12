#include <stdio.h>

/**
 * main - Print first 50 Fibonacci nums-starts with 1 and 2,
 *        separated by a comma-space is followed
 *
 * Return: 0 on success
 */
int main(void)
{
	int x;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
