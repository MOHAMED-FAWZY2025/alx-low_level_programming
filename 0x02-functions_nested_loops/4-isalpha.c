#include "main.h"

/**
 * _isalpha - check_alphabetic char
 * @x: check char
 * Return: 1 if x is a letter, 0 otherwise
 */
int _isalpha(int x)
{
	return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}
