#include "main.h"

/**
 * _islower - check if char is lowercase
 * @x: is char checked
 * Return: 1 if char is lowercase_otherwise 0.
 */

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
}
