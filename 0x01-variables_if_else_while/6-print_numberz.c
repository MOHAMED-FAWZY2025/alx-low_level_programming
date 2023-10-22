#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints 0 to 10 by putchar
 * Return: Always 0 on success
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}

