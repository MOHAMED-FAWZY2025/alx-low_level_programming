#include <stdio.h>


/**
 * main - writes  lowercase alphabet in reverse - new line is followed
 *
 * Return: Always 0 on success
 *
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

	putchar('\n');
	return (0);
}
