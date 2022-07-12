#include "main.h"
/**
 * _strlen - returns length of a string
 *
 * @s: input a pointer to a char
 *
 * Return: value of length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

