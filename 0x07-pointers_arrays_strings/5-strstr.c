#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: char pointer
 *
 * @needle: char pointer
 *
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
