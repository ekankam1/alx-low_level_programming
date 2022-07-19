#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to area dest
 *
 * @dest: pointer to char
 *
 * @src: pointer to char
 *
 * @n: unsigned int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
