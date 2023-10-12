#include "main.h"

/**
 * print_alphabet_x10 - print-10 times-alphabet_lowercase,
 * a new line is followed
 */
void print_alphabet_x10(void)
{
	char x;
	int i;

	i = 0;

	while (i < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
