#include "main.h"
/**
 * _strchr - Entry point
 * @s: input argument
 * @c: input argument
 * Return: 0 on Success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
