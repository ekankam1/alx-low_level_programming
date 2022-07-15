#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to char
 *
 * @s2: pointer to char
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
		else if (s1[i] < s2[i])
		{
			flag = s1[i] - s2[i];
				break;
		}
		else
			flag = s1[i] - s2[i];
	}
	return (flag);
}

