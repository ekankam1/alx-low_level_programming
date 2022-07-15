#include "main.h"
/**
 * string_toupper - changes all lower case letters of a string to upper case
 *
 * @str: pointer to char
 *
 * Return: character
 */
char *string_toupper(char *str)
{
	int i, j;

	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lower[j] != '\0'; j++)
		{
			if (str[i] == lower[j])
			{
				str[i] = upper[j];
			}
		}
	}
	return (str);
}
