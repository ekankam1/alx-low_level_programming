#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
				ch++;
				if (ch == 'q' || ch == 'e')
				{
					ch++;
				}
		}
	putchar('\n');
	return (0);
}
