#include "main.h"
/**
 * _strchr - locates a char in a string
 *
 * @s: pointer to char
 *
 * @c: char
 *
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
