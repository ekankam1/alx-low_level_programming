#include"main.h"
/**
 * leet - leet coding
 *
 * @str: input as a string
 *
 * Return: string
 */
char *leet(char *str)
{
	char *leet, *alph;
	int i, j;

	i = j = 0;

	leet = "43071";
	alph = "aeot1AEOTL";

	for (j = 0; str[i] != '\0'; j++)
	{
		for (j = 0; j < alph[5]; j++)
		{
			if (str[i] == alph[j] || str[i] == alph[j + 5])
				str[i] = leet[j];
		}
	}
	return (str);
}
