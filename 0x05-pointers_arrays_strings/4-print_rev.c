#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 *
 * @s: input a pointer to a string
 *
 * Return: 0
 */
void print_rev(char *s)
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
		printf("%c", (char)(*s));
	}
	printf("\n");
}
