#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: input pointer to a string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int mySize = 0;
	int i = 0;
	int half;

	while (*str != '\0')
	{
		mySize++;
		str++;
	}
	if (mySize % 2 == 0)
	{
	half = mySize / 2;
	}
	else
	{
	half = (mySize + 1) / 2;
	}
	for (i = 0; i < half; i++)
	{
		printf("%c", *str);
			str += 2;
	}
}
