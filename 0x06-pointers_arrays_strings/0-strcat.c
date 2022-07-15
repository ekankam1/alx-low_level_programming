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
	long unsigned int i = 0;
	long unsigned int j;
        char finalstring[50];

	for (i = 0; i <= strlen(dest); i++)
	{
		finalstring[i] = dest[i];
	}
	for (j = (strlen(dest) + 1); j <= strlen(src); j++)
	{
		finalstring[j] = src[j];
	}
	dest = finalstring;
	return (dest);
}
