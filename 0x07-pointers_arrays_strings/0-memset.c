#include "main.h"
/**
 * _memset - writes block-memory with specific-value
 * @s: starts address-memory
 * @b: the desired value
 * @n: num-bytes to changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
