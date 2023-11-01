#include "main.h"
/**
 * _strlen - return-length-string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}

	return (x);
}

