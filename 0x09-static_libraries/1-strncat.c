#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: input pointer to char
 *
 * @src: input pointer to char
 *
 * @n: input integer
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
