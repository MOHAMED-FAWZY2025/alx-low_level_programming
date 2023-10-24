#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array of function-prints-chessboard
 * Return: Always 0 on (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[i][x]);
		_putchar('\n');
	}
}