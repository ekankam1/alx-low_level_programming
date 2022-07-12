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
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			printf('\n');
			break;
		}
		if (count % 2 == 0)
			printf(str[count]);
		count++;
	}
}
