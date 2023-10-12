#include <stdio.h>

/**
 * main - print sum of the even-valued terms
 * new line is followed
 * Return: 0 on (Success)
 */
int main(void)
{
	int x;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
