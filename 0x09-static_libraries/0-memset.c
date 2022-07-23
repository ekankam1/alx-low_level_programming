#include "main.h"
/**
 * _memset - fill first n bytes of memory area
 *
 * @s: pass pointer to char
 *
 * @b: pass char
 *
 * @n: pass unsigned int
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		s[n] = b;
	}
	return (s);
}
