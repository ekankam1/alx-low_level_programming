#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 *
 * @s: pointer to char
 *
 * @accept: pointer to char
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
