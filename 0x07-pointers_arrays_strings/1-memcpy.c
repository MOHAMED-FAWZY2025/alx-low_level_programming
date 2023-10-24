#include "main.h"
/**
 * _memcpy - function to copy memory-area
 * @dest: memory which is stored
 * @src: memory which is copied
 * *@n: num of bytes
 *
 * Return: copied-memory with n of byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
