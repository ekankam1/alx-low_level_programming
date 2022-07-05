#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	char ch;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
			i++;
	}
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
