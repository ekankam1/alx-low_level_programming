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

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i == 9)
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}
