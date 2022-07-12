#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: pointer to char
 *
 */
void rev_string(char *s)
{
	int mySize = 0;
	int i = 0;

	while (*s != '\0')
	{
		mySize++;
		s++;
	}
	for (i = 0; i < mySize; i++)
	{
		s--;
	}

