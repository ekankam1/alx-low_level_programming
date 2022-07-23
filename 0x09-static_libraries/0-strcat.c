#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 *
 * @dest: input pointer to char
 *
 * @src: input pointer to char
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	 unsigned int i = 0;
	 unsigned int j;

	for (i = 0; i <= strlen(dest); i++)
	{
		dest[i] = dest[i];
	}
	for (j = (strlen(dest) + 1); j <= strlen(src); j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
